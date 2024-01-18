#include<bits/stdc++.h>
using namespace std;
 const int N=1e5;
vector <int> g[N];
bool vis[N];
vector<vector<int> > cc;
vector<int> current_cc;
void dfs(int vertex)
{
	current_cc.push_back(vertex);
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
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]) continue;
		current_cc.clear();
		dfs(i);
		cc.push_back(current_cc);
	}
	cout<<cc.size()<<endl;
	for(auto current_cc : cc)
	{
		for(auto i : current_cc)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
}
