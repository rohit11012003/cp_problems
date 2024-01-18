#include<bits/stdc++.h>
using namespace std;
vector<int> g[100005];
void dfs(int vertex,int par,int vis[])
{
	vis[vertex]=1;
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		dfs(child,vertex,vis);
	}
}
int main()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		g[i].push_back(a);
		g[a].push_back(i);
	}
	int vis[n+1];
	for(int i=0;i<=n;i++)
	{
		vis[i]=0;
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			count++;
			dfs(i,0,vis);
		}
	}
	cout<<count<<endl;
	return 0;
}
