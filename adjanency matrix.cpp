#include<bits/stdc++.h>
using namespace std;
int graph[1000][1000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		graph[a][b]=wt;
		graph[b][a]=wt;
		
	}
}
