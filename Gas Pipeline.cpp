#include<bits/stdc++.h>
using namespace std;
long long int dp[200005];
long long int fun(long long int ind,long long int height,long long int a,long long int b,string &s,long long int n)
{
	if(ind==n)
	{
		return 0;
	}
	if(dp[ind]!=-1)
	{
		return dp[ind];
	}
	if(ind==0)
	{
		dp[0]=b;
		fun(ind+1,1,a,b,s,n);
		return 0;
	}
	if(ind==n-1)
	{
		if(height==1)
		{
			return a+b;
		}
		else if(height==2)
		{
			return 2*a+b;
		}
	}
	else{
		long long int count=0;
		if(s[ind]=='1'&&height==2)
		{
			
			return dp[ind]=fun(ind+1,2,a,b,s,n)+(2*b)+a;
		}
		 else if(s[ind]=='1'&&height==1)
		 {
		 	
		 	return dp[ind]=fun(ind+1,2,a,b,s,n)+2*(a+b);
		 }
		 else if(s[ind]==0&&height==1)
		 {
		 	
		 	return dp[ind]=fun(ind+1,1,a,b,s,n)+a+b;
		 }
		 else{
		 	long long int ans=fun(ind+1,2,a,b,s,n)+a+2*b;
		 	return dp[ind]=min(ans,fun(ind+1,1,a,b,s,n)+2*a+b);
		 }
		
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		long long int a,b,n;
		for(int i=0;i<n+2;i++)
		{
			dp[i]=-1;
		}
		cin>>a>>b>>n;
		string s;
		cin>>s;
		long long int p=fun(0,0,a,b,s,n);
		cout<<dp[n-1]<<endl;
	}
}
