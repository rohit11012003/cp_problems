#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;
	int n1=s1.size();
	int n2=s2.size();
	vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
	for(int i=0;i<=n1;i++) dp[i][0]=0;
	for(int j=0;j<n2;j++) dp[0][j]=0;
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	int n=dp[n1][n2];
	string s;
	for(int i=0;i<n;i++)
	{
		s+='@';
	}
	int i=n1;int j=n2;
	int ind=n-1;
	while(i>0&&j>0)
	{
		if(s1[i-1]==s2[j-1])
		{
			s[ind]=s1[i-1];
			i=i-1;
			j=j-1;
			ind=ind-1;
		}
		else{
			if(dp[i-1][j]>dp[i][j-1])
			{
				i=i-1;
				
			}
			else if(dp[i-1][j]<dp[i][j-1])
			{
				j=j-1;
			}
			else{
				i=i-1;
			}
		}
	 } 
	 cout<<s<<endl;
}
