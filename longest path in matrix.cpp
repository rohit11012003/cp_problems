#include<bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];
int vis[N][N];
int fun(vector<vector<int>>& a, int i, int j, int n, int m)
{
    if(i<0||j<0||i>=n||j>=m)
    {
        return 0;
    }
    else{
        
            
            if(dp[i][j]!=-1)
            {
                return dp[i][j];
            }
            else{
                int p=0;
                if(i>0)
                {
                    if(a[i-1][j]>a[i][j])
                    {
                        p=fun(a,i-1,j,n,m)+1;
                    }
                }
                if(j>0)
                {
                    if(a[i][j-1]>a[i][j])
                    {
                        p=max(p,fun(a,i,j-1,n,m)+1);
                    }
                }
                if(i<n-1)
                {
                    if(a[i+1][j]>a[i][j])
                    {
                        p=max(p,fun(a,i+1,j,n,m)+1);
                    }
                }
                if(j<m-1)
                {
                    if(a[i][j+1]>a[i][j])
                    {
                        p=max(p,fun(a,i,j+1,n,m)+1);
                    }
                }
                return dp[i][j]=p;
            }
        
    }
}
int main()
{
	memset(dp,-1,sizeof(dp));
	vector<vector<int> > matrix;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		vector<int> v;
		for(int j=0;j<m;j++)
		{
			int a;
			cin>>a;
			v.push_back(a);
		}
		matrix.push_back(v);
	}
	int ans=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans=max(ans,fun(matrix,i,j,n,m));
                
            }
        }
        cout<<ans+1<<endl;
}
