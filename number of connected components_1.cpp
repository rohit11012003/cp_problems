#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
vector<int> v[N];
int vis[N];
 void dfs(int ind )
 {
 	vis[ind]=1;
 	for(auto child : v[ind])
 	{
 		if(vis[child]==1) continue;
 		dfs(child);
	 }
 }
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]!=1)
		{
		count++;	dfs(i);
		}
	}
	cout<<count<<endl;
}
