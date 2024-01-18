#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int par[N];

void dfs(int ind ,int pa)
{
	par[ind]=pa;
	for(auto child : v[ind])
	{
		if(child==pa)
		{
			continue;
		}
		dfs(child,ind);
	}
}
void path(vector<int> &v1, int ind)
{
	if(ind==-1)
	{
		return ;
	}
	v1.push_back(ind);
	path(v1,par[ind]);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-2;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int a,b;
	cin>>a>>b;
	dfs(1,-1);
	vector<int> v1;
	vector<int> v2;
	path(v1,a);
	path(v2,b);
	reverse(v1.begin(),v1.end());
	int x=min(v1.size(),v2.size());
	int ind=-1;
	for(int i=0;i<x;i++)
	{
		if(v1[i]!=v2[i])
		{
			ind=i-1;
			break;
		}
	}
	cout<<v1[ind]<<endl;
}
