#include<bits/stdc++.h>
using namespace std;
void fun(long long int node, int &z, map<int , int> &m, int &p)
{
    if(z==0||z==-1)
    {
        return ;
    }
    long long int x=node/2;
    long long int y=(node+1)/2;
    if(m[x]>0)
    {
        m[x]--;
        z--;
    }
    else{
        if(x>=p)
        {
            fun(x,z,m,p);
        }
        else{
            z=-1;
            return ;
        }
    }
    if(m[y]>0)
    {
        m[y]--;
        z--;
    }
    else{
        if(y>=p)
        {
            fun(y,z,m,p);
        }
        else{
            z=-1;
            return ;
        }
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long int node=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            node+=a[i];
        }
        map<int , int> m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]=m[a[i]]+1;
        }
        sort(a,a+n);
        int p=a[0];
        if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else{
        int z=n;
        fun(node, z,m,p);
        if(z==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}