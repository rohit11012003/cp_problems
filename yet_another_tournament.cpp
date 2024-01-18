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
        long long int p=0;
        vector<pair<int , int>> v;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p=p+a[i];
            v.push_back({a[i],i});
        }
        if(p==m)
        {
            cout<<1<<endl;
        }
        else{
            int z=0;
            sort(v.begin(),v.end());
            vector<int> v1;
            int b[n];
            for(int i=0;i<n;i++)
            {
                b[i]=-1;
            }
            for(int i=0;i<n;i++)
            {
               
                z=z-v[i].first;
                if(z>=v[i+1].first)
                {
                    m=m-v[i].first;
                    v1.push_back(v[i].second);
                    count++;
                    b[v[i].second]=0;
                }
                else{
                    z=i;
                    break;
                }
            }
           sort(v1.begin(),v1.end());
           int ans[n];
           int j=0;
           for(int i=0;i<n;i++)
           {
            ans[i]=i;
            if(b[i]==-1)
            {
                ans[i]++;
            }
           }
        }
    }
}