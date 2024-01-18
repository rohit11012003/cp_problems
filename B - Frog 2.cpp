#include<bits/stdc++.h>
using namespace std;
int h[1000000];
int dp[1000000];
long long int fun(int i,int p)
{
	if(i==0)
	{
		return dp[0]= 0;
	}
	if(dp[i]!=-1)
	return dp[i];
	long long int cost=INT_MAX;
	int t=min(p,i);
	int k=i-t;
	for(int j=0;j<t;j++)
	{
		cost=min(cost,abs(h[i]-h[k])+fun(k,p));
		k++;
	}
	return dp[i] =cost;
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	cout<<fun(n-1,k)<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<dp[i]<<" ";
//	}
	return 0;
}
