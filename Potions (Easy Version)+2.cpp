#include<bits/stdc++.h>
using namespace std;
int dp[2002][2002];
int fun(long long int a[],int ind,long long int health,int drinks,int n)
{
	if(ind==n)
	{
		return 0;
	}
	if(dp[ind][drinks]!=-1)
	{
		return dp[ind][drinks];
	}
	else{
		
	if(a[ind]>=0)
	{
		return dp[ind][drinks]=1+fun(a,ind+1,health+a[ind],drinks+1,n);
	}
	else{
		int ans=fun(a,ind+1,health,drinks,n);
		if(health+a[ind]>=0)
		{
			ans=max(ans,1+fun(a,ind+1,health+a[ind],drinks+1,n));
			
		}
		return dp[ind][drinks]=ans;
	}}
}
int main()
{
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<fun(a,0,0,0,n)<<endl;;
}
