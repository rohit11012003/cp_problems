#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int , int>> v;
        for(int i=0;i<n-1;i++)
        {
            v.push_back({a[i+1]-a[i],i});
        }
        sort(v.begin(),v.end());
        vector<int> v1;
        for(int i=v.size()-1;i>=0;i--)
        {
            v1.push_back(v[i].second);
        }
        int z=n-1;
        int i=0;
        long long int ans=0;
        while(k>1)
        {
            ans=ans+a[z]-a[v1[i]+1];
            k--;
            z=v1[i];
            i++;
        }
        ans=ans+a[z]-a[0];
        cout<<ans<<endl;

    }
