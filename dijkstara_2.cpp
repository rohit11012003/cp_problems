#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<pair<int, int>> v[N];
int vis[N];
int dis[N];
int bfs(int source)
{
	for(int i=0;i<N;i++)
	{
		dis[i]=INT_MAX;
	}
	dis[source]=0;
	vector<pair<int,int>> v1;
	v1.push_back({0,source});
	while(!v1.empty())
	{
		int curr=v1[0].second;
		if(vis[curr]==1) 
		{
			v1.erase(v1.begin());
			continue;
		}
		v1.erase(v1.begin());
		vis[curr]=1;
		for(auto child: v[curr])
		{
			int x=child.first;
			int y=child.second;
			if(vis[x]==1) continue;
			else{
				dis[x]=min(dis[curr]+y,dis[x]);
				v1.push_back({dis[x],x});
			}
		}
		sort(v1.begin(),v1.end());
	}
}
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v[a].push_back({b,c});
		v[b].push_back({a,c});
	}
	int source;
	cin>>source;
	
	bfs(source);
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<" ";
	}
	cout<<endl;
	
}
