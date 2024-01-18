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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int, int>> v;
        for(int i=0;i<=n-4;i++)
        {
            for(int j=i+2;j<n-1;j++)
            {
                if(a[j]>a[i])
                {
                    v.push_back({i,j});
                }
            }
        }
        vector<int> v1[n+5];
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<=i;j++)
            {
                v1[a[i]].push_back(0);
            }
            for(int j=i+1;i<n;i++)
            {
                if(a[j]>a[i])
                {
                    count++;
                    v1[a[i]].push_back(count);
                }
                else{
                    v1[a[i]].push_back(count);
                }
            }
        }
        vector<vector<int>> sum(n+5,vector<int>(n+5,0));
        

    }
}