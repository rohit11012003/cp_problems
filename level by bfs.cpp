#include<bits/stdc++.h>
using namespace std;
const int N=1e5+4;
vector<int> v[N];
int level[N];
int vis[N];
void bfs(int ind)
{
	vis[ind]=1;
	queue<int> q;
	q.push(ind);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int child : v[curr])
		{
			if(vis[child]==1) continue;
			q.push(child);
			vis[child]=1;
			level[child]=level[curr]+1;
		}
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
	for(int i=1;i<=n;i++)
	{
		if(vis[i]!=1)
		{
			bfs(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<level[i]<<" ";
	}
	
}
