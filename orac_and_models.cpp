#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<long long int, int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],i+1+1});
        }
        sort(v.begin(),v.end());
        map<int,int>m;
        map<int,int> m1;
        for(int i=0;i<n;i++)
        {
            m[v[i].second]=i+1;

        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int p=v[i].second;
            m1[p]=max(m1[p],1);
            ans=max(ans,m1[p]);
            for(int j=p+p;j<=n;j=j+p)
            {
                if(m[j]>i+1)
                {
                    m1[j]=max(m1[j],m1[p]+1);
                    ans=max(ans,m1[j]);
                }
            }
        }
        cout<<endl;
    }
}