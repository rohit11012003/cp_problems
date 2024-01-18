#include<bits/stdc++.h>
using namespace std;
const int n=3;
int mindis(int dis[], bool sptset[])
{
	int mi=INT_MAX;
	int ind=0;
	for(int i=0;i<n;i++)
	{
		if(dis[i]<mi&&sptset[i]==false)
		{
			mi=dis[i];
			ind=i;
		}
	}
	return ind;
}
void print(int dis[])
{
	for(int i=0;i<n;i++)
	{
		cout<<dis[i]<<" ";
	}
}
void dijkstra(int graph[n][n], int src)
{
	int dis[n];
	bool sptset[n];
	for(int i=0;i<n;i++)
	{
		dis[i]=INT_MAX;
		sptset[i]=false;
	}
	dis[src]=0;
	for(int i=0;i<n;i++)
	{
		int u=mindis(dis,sptset);
		sptset[u]=true;
		for(int v=0;i<n;i++)
		{
			if (!sptset[v] && graph[u][v] && dis[u] != INT_MAX
                && dis[u] + graph[u][v] < dis[v])
                dis[v] = dis[u] + graph[u][v];
		}
	}
    print(dis);
	
}
int main()
{
	
	int graph[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>graph[i][j];
		}
	}
	dijkstra(graph,0);

}
