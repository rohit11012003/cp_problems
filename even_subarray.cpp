#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    int z=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                z=z+1;
            }
            else{
                z=z+2;
            }
        }
    }
    return z%2;

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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    vector<pair<int, int >> v;
    int z=-1;
    int q=0;
    for(int i=0;i<n;i++)
    {
        if(z==-1)
        {
            int p=fun(a[i]);
            if(p==0)
            {
                z=i;
                q=a[i];
            }
        }
        else{
            int p=a[i]^q;
            int c=fun(p);
            if(c==0)
            {
                q=p;
            }
            else{
                v.push_back({z,i-1});
                z=-1;
                q=0;
            }
        }
    }
    if(v.size()==0)
    {
        
    }

    }
    

}