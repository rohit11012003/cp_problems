#include<bits/stdc++.h>
using namespace std;
const int N=103;
int vis[N][N];
int a[N][N];
int fun(  int i, int j, int n, int m)
{
	if(i==-1||j==-1)
	{
		return 0;
	}
	if(i==n||j==m)
	{
		return 0;
	}
	if(vis[i][j]==0)
	{
		return 0;
	}
	vis[i][j]=0;
	int p=0;
	if(i-1>=0&&vis[i-1][j]==-1)
	{
		if(a[i-1][j]+1==a[i][j])
		{
		 p=	fun(i-1,j,n,m)+1;
		}
		
	}
	if(j-1>=0&&vis[i][j-1]==-1)
	{
		p=max(p,fun(i,j-1,n,m)+1);
	}
	if(i+1<n&&vis[i+1][j]==-1)
	{
		p=max(p, fun(i+1,j,n,m)+1);
	}
	if(j+1<m&&vis[i][j+1]==-1)
	{
		p=max(p,fun(i,j+1,n,m)+1);
	}
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			memset(vis, -1, sizeof(vis));
			int p=fun(i,j,n,m);
			v.push_back(p);
		}
	}
	sort(v.begin(), v.end());;
	cout<<v[v.size()-1]+1<<endl;
}
