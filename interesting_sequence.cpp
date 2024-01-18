#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
        vector<int> v;
        for(int i=63;i>=0;i--)
        {
            v.push_back((n>>i)&1);
        }
        int p=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                p=i;
                break;
            }
        }
        if(p==0)
        {
            if(x==0)
            {
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(n==x)
            {
                cout<<setprecision(0) <<n<<endl;
            }
            else{
                int z=0;
                for(int i=63;i>p;i--)
                {
                   
                    if(v[i]==1)
                    {
                        z=1;
                      //  cout<<i<<endl;
                        break;
                    }
                }
                if(z==0)
                {
                  //  cout<<"yes"<<endl;
                    if(x==0)
                    {
                        cout<<fixed<<setprecision(0) <<(pow(2,64-p))<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                }
                else{
                    
                    long long int a1[64];
                    long long int z1=0;
                    for(int i=63;i>=0;i--)
                    {
                        if(v[i]==1)
                        {
                            z1=z1+pow(2,63-i);
                        }
                        a1[i]=z1;
                    }
                  
                    unordered_map<long long int, long long int> m;
                    for(int j=62;j>=p;j--)
                    {
                        if(v[j]==0&&v[j+1]==1)
                        {
                            long long int n1=n;
                            n1=n1-a1[j];
                            long long int n2=n1+pow(2,63-j);
                           // cout<<j<<" "<<n1<<" "<<n2<<endl;
                            m[n1]=n2;

                        }
                    }
                    m[0]=pow(2,63-p+1);
                    if(m[x]==0)
                    {
                        cout<<-1<<endl;
                    }
                    else{
                       cout <<fixed<< setprecision(0) << m[x]<<endl;
                    }
                }
            }
        }
    }
}