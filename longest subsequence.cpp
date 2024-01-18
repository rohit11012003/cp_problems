#include<bits/stdc++.h>
using namespace std;
int h[1000000];
int dp[1000000];
int fun(int i)

{
	int ans=1;
	if(dp[i]!=-1) return dp[i];
	for(int j=0;j<i;j++)
	{
		if(h[j]<h[i])
		{
			ans=max(ans,fun(j)+1);
		}
	}
	return dp[i] =ans;
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=max(ans,fun(i));
	}
	cout<<ans<<endl;
}
