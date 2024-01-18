#include<bits/stdc++.h>
using namespace std;
 const int N=1e5;
vector <int> g[N];
const int count=0;
bool vis[N];
void dfs(int vertex)
{
	if(vis[vertex]==false)
	{
		count++;
	}
	vis[vertex]=true;

	//taker action on the vertex after entring the vertex
	for(int child : g[vertex])
	{
		
		if(vis[child]) continue;
		
		//take action on the child befopre entring the dfs
		dfs(child);
		// take action on the child after exiting  the child 
	}
	
	//take action the vertex after exciting the vertex
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
for(int i=1;i<=n;i++)
{
	dfs(i);
}
cout<<count<<endl;
}
