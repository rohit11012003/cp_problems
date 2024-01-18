#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int dp[N][N];
int fun(int a[], int b[], int i, int j)
{
    if(i==-1|| j==-1)
    {
        return 0;
    }
    else{
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        else{
            if(a[i]==b[j])
            {
                return dp[i][j]=fun(a,b,i-1,j-1)+1;
            }
            else{
            return dp[i][j]=max(fun(a,b,i-1,j),fun(a,b,i,j-1));
        }}
    }
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	memset(dp,-1,sizeof(dp));
       int b[n];
       for(int i=0;i<n;i++)
       {
           b[i]=a[i];
       }
       sort(b,b+n);
       cout<<fun(a,b,n-1,n-1);
}
