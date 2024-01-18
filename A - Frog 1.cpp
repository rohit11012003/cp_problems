#include<bits/stdc++.h>
using namespace std;
int h[1000000];
int dp[1000000];
long long int fun(int i)
{
	long long int cost=INT_MAX;
	if(i==0) return dp[0]= 0;
	if(dp[i]!=-1) return dp[i];
	cost=min(cost,abs(h[i]-h[i-1])+fun(i-1));
	if(i>=2)
	{
		cost=min(cost,abs(h[i-2]-h[i])+fun(i-2));
	}
	return dp[i]=cost;
}
int main()
{
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	cout<<fun(n-1)<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<dp[i]<<endl;
//	}
	
}
