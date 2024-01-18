#include<bits/stdc++.h>
using namespace std;
const int N=1e3;
int dp[N][N];
int fun(string s1, string s2, int i , int j)
{
	if(i==-1||j==-1)
	{
		return   0;
	}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	if(s1[i]==s2[j])
	{
		return dp[i][j]= fun(s1,s2,i-1,j-1)+1;
	}
	else{
		return dp[i][j]= max(fun(s1,s2,i-1,j),fun(s1,s2,i,j-1));
	}
}
int main()
{
	memset(dp,-1,sizeof(dp));
	string s1;
	string s2;
	cin>>s1>>s2;
	int n1=s1.size();
	int n2=s2.size();
	cout<<fun(s1,s2,n1-1,n2-1)<<endl;
}
