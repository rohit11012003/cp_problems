//finding diameter of a tree
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int depth[N];
vector<int> v[N];
void dfs(int vertex,int par=0)
{
	
	for(auto child : v[vertex])
	{
		if(child==par) continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);
	
	int ma_depth=-1;
	int node=-1;
	for(int i=1;i<=n;i++)
	{
		if(depth[i]>ma_depth)
		{
			ma_depth=depth[i];
			node=i;
		}
		depth[i]=0;
	}
	
	dfs(node);
	for(int i=1;i<=n;i++)
	{
		if(depth[i]>ma_depth)
		{
			ma_depth=depth[i];
		}
	}
	cout<<ma_depth<<endl;
}
