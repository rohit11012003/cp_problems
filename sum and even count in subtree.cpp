#include<bits/stdc++.h>
using namespace std;
const int N =1e5;
vector<int> v[N];
int  sum[N];
int even_count[N];
void dfs(int vertex, int par)
{
	if(vertex%2==0)
	{
		even_count[vertex]++;
	}
	sum[vertex]=sum[vertex]+vertex;
	for(int child : v[vertex])
	{
		if(child==par) continue;
		dfs(child,vertex);
		sum[vertex]+=sum[child];
		even_count[vertex]+=even_count[child];
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1,0);
	
for(int i=1;i<=n;i++)
{
	cout<<sum[i]<<" "<<even_count[i]<<endl;
}
	
}
