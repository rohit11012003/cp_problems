#include<bits/stdc++.h>
using namespace std;
int fun(int ind, int k, int z, int t, int a[],vector<vector<vector<int>>> &dp)
{
   // cout<<k<<endl;
    if(k<=0)
    {
        return 0;
    }
    if(dp[ind][z][t]!=-1)
    {
        return dp[ind][z][t];
    }
    if(ind>0)
    {
        if(t==0&&z>0)
        {
            return dp[ind][z][t]= max(a[ind]+fun(ind-1,k-1,z-1,1,a,dp),a[ind]+fun(ind+1,k-1,z,0,a,dp));
        }
        else {
            return dp[ind][z][t]= a[ind]+fun(ind+1,k-1,z,0,a,dp);
        }
    }
    if(ind==0)
    {
        return dp[ind][z][t]= a[ind]+fun(ind+1,k-1,z,0,a,dp);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k,z;
    cin>>n>>k>>z;
    int a[n];
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(z+1,vector<int>(3,-1)));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<a[0]+ fun( 1, k, z, 0,a,dp)<<endl;}
}