#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<long long int , long long int >> v;
        map<long long int , int> m;
        for(int i=0;i<n-1;i++)
        {
            long long int a,b;
            cin>>a>>b;
            v.push_back({a,b});
            m[a]=m[a]+1;
            m[b]=m[b]+1;

        }
        vector<long long int> ans;
        long long int ans1=0;
        for(int i=0;i<n;i++)
        {
            ans1=ans1+a[i];
        }
        vector<pair<long long int , long long int >> v1;
        for(int i=0;i<n;i++)
        {
            long long int z3=a[i];
            int z4=m[i+1];
            v1.push_back({z3,z4});
        }
        sort(v1.begin(),v1.end());
        ans.push_back(ans1);
        int p=n-1;
        while(p>=0)
        {
            long long int z4=v1[p].first;
            int z5=v1[p].second;
            if(z5>1)
            {
                ans1=ans1+z4;
                ans.push_back(ans1);
                v1[p].second=v1[p].second-1;
            }
            else{
                p--;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}