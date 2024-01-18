#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> prime;
void sieve()
{
    vector<int> v(N,0);
    v[1]=1;
    for(int i=2;i<N;i++)
    {
        if(v[i]==1) continue;
        prime.push_back(i);
        for(int j=i+i;j<N;j+=i)
        {
            v[j]=1;
        }
    }
}
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    else{
        gcd(b%a,a);
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    while(n--)
    {
        int a, b;
        cin>>a>>b;
        if(b==a+1)
        {
            cout<<-1<<endl;
        }
        else if(a%2==0&&b%2==0)
        {
            cout<<0<<endl;
        }
        else if(a%2!=0&&b%2!=0)
        {
            int p=gcd(a,b);
            if(p==1)
            {
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            int p=b-a;
            vector<int> v;
            for(int i=0;i<prime.size();i++)
            {
                if(prime[i]*prime[i]>p)
                {
                    break;
                }
                else{
                    if(p%prime[i]==0)
                    {
                        int a=p/prime[i];
                        if(a!=prime[i])
                        {
                            v.push_back(prime[i]);
                            v.push_back(a);
                        }
                        else{
                            v.push_back(a);
                        }
                    }
                }
            }
            v.push_back(p);
            
            long long int dis=INT_MAX;
            for(int i=0;i<v.size();i++)
            {
               // cout<<v[i]<<" ";
                int x=b/v[i];
               // cout<<x<<endl;
                int y=b%v[i];
                if(y!=0)
                {
                   // cout<<"yes"<<endl;
                    x=v[i]*x;
                   // cout<<x<<endl;
                    x+=v[i];
                }
                else{
                    x=v[i]*x;
                }
              //  cout<<x<<" "<<b<<endl;
                int z=x-b;
                //cout<<z<<" ";
                if(dis>z)
                {
                    dis=z;
                }
            }
            //cout<<endl;
            cout<<dis<<endl;
        }

    }
}