#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int > > graph[1000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		graph[a].push_back({b,wt});
		graph[b].push_back({a,wt});
	}
}
