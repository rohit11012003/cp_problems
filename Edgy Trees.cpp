#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int,int> > v[N];
int level[N];
int vis[N];
void bfs(int ind)
{
	queue<int> q;
	vis[ind]=-1;
	q.push(ind);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(auto child : v[curr])
		{
			if(vis[child.first]==-1) continue;
			q.push(vis[child.first]);
			level[child.first]=level[curr]+1;
			vis[child.first]==-1;
		}
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v[a].push_back({b,c});
		v[b].push_back({a,c});
	}
	bfs(1);
	
}
