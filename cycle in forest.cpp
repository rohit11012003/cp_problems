#include<bits/stdc++.h>
using namespace std;
 const int N=1e5;
vector <int> g[N];
const int count=0;
bool vis[N];

bool dfs(int vertex,int par)
{
	
	vis[vertex]=true;
	bool is_loopexicts=false;
	//taker action on the vertex after entring the vertex
	for(int child : g[vertex])
	{ 
		
		if(vis[child]&&child==par) continue;
		if(vis[child]) return true;
		//take action on the child befopre entring the dfs
		is_loopexicts |= dfs(child,vertex);
		// take action on the child after exiting  the child 
	}
	return is_loopexicts;
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
	bool is_loopexicts = false;
for(int i=1;i<=n;i++)
{
	if(vis[i]) continue;
	dfs(i,0);
	if(dfs(i,0))
	{
		is_loopexicts =true;
		break;
	}
}
cout<<is_loopexicts<<endl;
return 0;

}
