#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> v[N];
int d[N];
int height[N];

void dfs(int vertex,int par=0)
{
	for(int child : v[vertex])
	{
		if(child==par) continue;
		d[child]=d[vertex]+1;
		dfs(child,vertex);
		height[vertex]=max(height[vertex],height[child]+1);
	}
	
} 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1,0);
	
	for(int i=1;i<=n;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<height[i]<<" ";
	}
	cout<<endl;
}
