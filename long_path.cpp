#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long int  fun(int i,  int a[], vector<vector<long long int>> &v, int n)
{
    if(i==n)
    {
        return 0;
    }
    if(i==a[i]-1)
    {
        return (2+fun(i+1,a,v,n))%mod;
    }
    if(v[i][a[i]-1]!=-1&&v[i][a[i]-1]!=0)
    {
        return (v[i][a[i]-1]+fun(i+1,a,v,n))%mod;
    }
    if(v[i][a[i]-1]==0)
    {
        return 2;
    }
    else{

        v[i][a[i]-1]=0;
        long long int p=fun(a[i]-1,a,v,n);
        v[i][a[i]-1]=p;
        return (p+fun(i+1,a,v,p))%mod;
    }

}

int main()
{
    int n;
    cin>>n;
    long long int dp[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<vector<long long int>> v(n+1,vector<long long int>(n+1,-1));
   cout<< fun(0,a,v,n)<<endl;


}