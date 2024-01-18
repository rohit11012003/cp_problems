#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int fun(int amount ,vector<int> &coins)
{
	if(amount==0) return 0;
	if(dp[amount]!=-1) return dp[amount];
	int ans=INT_MAX;
	for(int coin : coins)
	{
		if((amount-coin)>=0)
		{
			ans=min(ans+0ll,fun(amount-coin,coins)+1ll);
		}
	}
	return dp[amount]=ans;
}
int main()
{
	memset(dp,-1,sizeof(dp));
	int amount ;
	cin>>amount;
	vector<int> coins={1,3,5};
	int ans=fun(amount,coins);
	if(ans==INT_MAX)
	{
		cout<<-1<<endl;
	}
	else{
		cout<<ans<<endl;
	}
	return 0;
}
