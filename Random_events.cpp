#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int,double>>v;
        for(int i=0;i<m;i++)
        {
            int a;
            double b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        int z=-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=i+1)
            {
                z=i+1;
                break;
            }
        }
        if(z==-1)
        {
            cout<<fixed<<setprecision(10)<<1<<endl;
        }
        else{
           // cout<<z<<endl;
            double x=1;
            for(int i=0;i<m;i++)
            {
                if(v[i].first>=z)
                {
                    x=x*(1-v[i].second);
                }
            }
            x=1-x;
            cout<<fixed<<setprecision(10)<<x<<endl;
        }

    }
}