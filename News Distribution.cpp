#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
vector<vector<int> > v2;
int vis[N];
vector<int> v[N];
int ans[N+1];
void dfs(int ind, vector<int> &v3 )
{
	vis[ind]=-1;
	v3.push_back(ind);
	for(auto child : v[ind])
	{
		if(vis[child]==-1) continue;
		dfs(child,v3);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	while(m--)
	{
		int k;
		cin>>k;
		vector<int> v1;
		for(int i=0;i<k;i++)
		{
			
			int a;
		    cin>>a;
		    v1.push_back(a);
			
		}
		for(int i=0;i<k-1;i++)
		{
			v[v1[i]].push_back(v1[i+1]);
			v[v1[i+1]].push_back(v1[i]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vector<int> v3;
			dfs(i,v3);
			v2.push_back(v3);
		}
	}
//	for(int i=0;i<v2.size();i++)
//	{
//		for(int j=0;j<v2[i].size();j++)
//		{
//			cout<<v2[i][j]<<" ";
//		}
//		cout<<endl;
//	}
int ans[n+1];
for(int i=0;i<v2.size();i++)
{
	for(int j=0;j<v2[i].size();j++)
	{
		ans[v2[i][j]]=v2[i].size();
	}
}
for(int i=1;i<=n;i++)
{
	cout<<ans[i]<<" ";
}
cout<<endl;

}
