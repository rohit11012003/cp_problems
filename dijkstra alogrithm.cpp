#include<bits/stdc++.h>
using namespace std;
const int N=1e3+3;
vector<pair<int , int> > v[N];
int vis[N];
int dis[N];
void bfs(int ind)
{
	dis[ind]=0;
	vector<pair<int, int> > v1;
	v1.push_back({0,ind});
	while(v1.size()!=0)
	{
		int a=v1[0].first;
		int b=v1[0].second;
		if(vis[b]==1)
		{
			cout<<b<<" hello"<<endl;
			v1.erase(v1.begin());
			continue;
		}
		vis[b]=1;
		v1.erase(v1.begin(),v1.end());
		for(auto child : v[b])
		{
			int x=child.first;
			int y=child.second;
			if(vis[x]==1) continue;
			if(dis[x]>a+y)
			{
				dis[x]=a+y;
				v1.push_back({a+y,x});
			}
			else{
				v1.push_back({dis[x],x});
			}
			
			
		}
		sort(v1.begin(),v1.end());
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		dis[i]=INT_MAX;
	}
	for(int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		v[a].push_back({b,wt});
		v[b].push_back({a,wt});
	}
	bfs(1);
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<dis[i]<<endl;
	}
}
