#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int tar, long long int n,vector<long long int > v)
{
    if(tar==0)
    {
        return 0;
    }
    if(tar==v[n])
    {
        return 1;
    }
    
    if(n==0)
    {
        return 1e13;
    }
    if(v[n]<=tar)
    {
        return min(fun(tar,n-1,v),1+fun(tar-v[n],n-1,v));
    }
    else{
        return fun(tar,n-1,v);
    }
}
int main()
{
    int t;
    cin>>t;
    vector<long long int > v;
    v.push_back(1);
    for(long long int i=1;i<=1e12;i)
    {
        i=i*2;
        v.push_back(i);
    }
    long long int z=1;
    for(long long int i=1;i<=1e12;i++)
    {
        if(z>1e12)
        {
            break;
        }
        v.push_back(z);
        z=z*(i+1);
        
    }
    while(t--)
    {
        long long int n;
        cin>>n;
        sort(v.begin(),v.end());
        set<long long int> s;
        vector<long long int> v1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>n)
            {
                break;
            }
            else{
                s.insert(v[i]);
            }
        }
        for(auto it : s)
        {
            v1.push_back(it);
        }
        long long int tar=n;
        n=v1.size();
        long long int p=fun(tar,n-1,v1);
        if(p>v1.size())
        {
            cout<<-1<<endl;
        }
        else{
            cout<<p<<endl;
        }

    }
}