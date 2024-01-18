#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.size();
	string s1=str;
    string s2=s1;
	reverse(s2.begin(),s2.end());    
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int j=0;j<=n;j++) dp[0][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    int n1=dp[n][n];
    string ans;
    for(int i=0;i<n1;i++)
    {
        ans+='*';
    }
    int ind=n1-1;
    int i=n;
    int j=n;
    while(i>0&&j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            ans[ind]=s1[i-1];
            ind--;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])
            {
                i--;
            }
            else if(dp[i-1][j]<dp[i][j-1])
            {
                j--;
            }
            else{
                i--;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
    	for(int j=0;j<=n;j++)
    	{
    		cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
