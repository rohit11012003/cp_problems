#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int fun(string &s,int a,int b,int n)
{
    if(a>b)
    {
        return 0;
    }
    if(dp[a][b]!=-1)
    {
        return dp[a][b];
    }
    else{
        if(s[a]==s[b])
        {
        	if(a!=b)
        	{
            return dp[a][b]= 2+fun(s,a+1,b-1,n);}
            else{
            	return dp[a][b]= 1+fun(s,a+1,b-1,n);
			}
        }
        else{
            return dp[a][b]= max(fun(s,a+1,b,n),fun(s,a,b-1,n));
        }
    }
}
int main()
{
	string A;
	cin>>A;
	for(int i=0;i<1010;i++)
    {
        for(int j=0;j<1010;j++)
        {
            dp[i][j]=-1;
        }
    }
    string s=A;
    int n=s.size();
   cout<< fun(s,0,n-1,n)<<endl;
	
}
