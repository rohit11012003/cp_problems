#include<bits/stdc++.h>
using namespace std;
vector<int> g[100005];

vector<int> ans;
void dfs2(int vertex,int par,int height[])
{
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		height[child]=height[vertex]+1;
		dfs2(child,vertex,height);
	}
}
void dfs1(int vertex,int par,int val[],int height[],int h1)
{
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		if((height[child]-h1)%2==0)
		{
		if(val[child-1]==0)
		{
			val[child-1]=1;
		}
		else {
			val[child-1]=0;
		}
		}
		dfs1(child,vertex,val,height,h1);
	}
}
void dfs(int vertex,int par,int val[],int goal[],int height[])
{
	if(val[vertex-1]!=goal[vertex-1])
	{
		val[vertex-1]=goal[vertex-1];
		
		int h1=height[vertex];
		ans.push_back(vertex);
		dfs1(vertex,par,val,height,h1);
	}
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		dfs(child,vertex,val,goal,height);
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int height[n+1];
	for(int i=0;i<n;i++)
	{
		height[i]=0;
	}
	int val[n];
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	int goal[n];
	for(int i=0;i<n;i++)
	{
		cin>>goal[i];
	}
	dfs2(1,0,height);
	dfs(1,0,val,goal,height);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
		
	}
	
}
