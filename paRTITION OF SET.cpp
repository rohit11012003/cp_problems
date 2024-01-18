#include<bits/stdc++.h>
using namespace std;
const int N1,N2;

int dp[N1][N2];
long long int fun(int dp[][], int a[],int ind , long long int sum1, long long int sum2)
{
	if(ind ==-1)
	{
		return abs(sum1-sum2);
	}
	if(dp[ind][sum1]!=-1)
	{
		return dp[ind][sum1];
	}
	else{
		return dp[ind][sum1]= min(fun(a,ind-1,sum1+a[ind],sum2), fun(a,ind-1, sum1, sum2+a[ind]));
		
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	init(n, sum);
	int dp[n+1][sum+1];
	memset(dp,-1,sizeof(dp));
	long long int sum1=0;
	long long int sum2=0;
	cout<<fun(dp,a,n-1,sum1, sum2);
}
