#include<bits/stdc++.h>
using namespace std;
const int N=2005;
long long int a[N]; 
const long long int g=1e9; 
 int dp[N][N];
long long int fun(int ind,long long int heath,int n,int drinks)
{
	if(ind==n)
	{
		return  0;
	}
	if(dp[ind][drinks]!=-1)
	{
		return dp[ind][drinks];
	}
	if(a[ind]>=0)
	{
		long long int p=fun(ind+1,heath+a[ind],n,drinks+1)+1;
		return dp[ind][drinks]=p;
	}
	else{
		
		long long int p=fun(ind+1,heath,n,drinks);
		if(heath+a[ind]>=0)
		{
			p=max(p,fun(ind+1,heath+a[ind],n,drinks+1)+1);
			
		}
		return dp[ind][drinks]=p;
	}
}
int main()
{
	int n;
	cin>>n;
memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int p=fun(0,0,n,0);
	cout<<p<<endl;
}
