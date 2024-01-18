#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int> v[N];
vector<vector<int> > v3[N];
int vis[N];
void dfs(int ind , vector<int> &v)
{
	vis[ind]=1;
	v.push_back(ind);
	for(auto child : v3[ind])
	{
		for(auto child1 : child)
		{
			if(vis[child1]==1) continue;
			dfs(child1,v);
		
		}
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v[26];
	vector<string> v1;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v1.push_back(s);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			int p=v1[i][j]-'a';
			v[p].push_back(i+1);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v1[i].size();j++)
		{
			int p=v1[i][j]-'a';
			v3[i+1].push_back(v[p]); 
		}
	}
	vector<vector<int> > v4;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]!=1)
		{
			vector<int> v5;
			dfs(i,v5);
			v4.push_back(v5);
		}
		
	}
	
	cout<<v4.size()<<endl;
	
}
