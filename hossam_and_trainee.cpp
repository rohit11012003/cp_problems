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
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       map<long long int , int> m1;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<prime.size();j++)
            {
                if(prime[j]*prime[j]>a[i])
                {
                    break;
                }
                if(a[i]%prime[j]==0)
                {
                   long long  int x=prime[j];
                    long long int y=a[i]/prime[j];
                    if(m1[x]==1||m1[y]==1)
                    {
                        flag=true;
                        break;
                    }
                    else{
                        m1[x]=1;
                        m1[y]=1;
                    }
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        map<long long , int> m;
        for(int i=0;i<n;i++)
        {
            if(m1[a[i]]==1)
            {
                flag=true;
                break;
            }
            else{
                m1[a[i]]=1;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}