#include<bits/stdc++.h>
using namespace std;
const int N=500;
vector<int> v[N];
vector<int> v1[N];
int vis[N];
int par[N];
int par1[N];
void dfs(int ind)
{
	vis[ind]=1;
	for(auto child : v[ind])
	{
		if(vis[child]==1) continue;
		dfs(child);
	}
}
void bfs(int ind)
{
	vis[ind]=1;
	queue<int> q;
	q.push(ind);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(auto child : v[curr])
		{
			if(vis[child]==1) continue;
			par[child]=curr;
			q.push(child);
			vis[child]=1;
		}
	}
}
void bfs1(int ind)
{
	vis[ind]=1;
	queue<int> q;
	q.push(ind);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(auto child : v1[curr])
		{
			if(vis[child]==1) continue;
			par1[child]=curr;
			q.push(child);
			vis[child]=1;
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i);
		for(int j=1;j<=n;i++)
		{
			if(vis[i]==0)
			{
				v1[i].push_back(j);
			}
			vis[i]=0;
		}
	}
	bfs(1);
	for(int i=0;i<=495;i++)
	{
		vis[i]=0;
	}
	bfs1(1);
	cout<<"werfa";
	return 0;
	vector<int> v3;
	vector<int> v4;
	int ind=n;
	while(par[ind]!=0)
	{
		v4.push_back(ind);
		ind=par[ind];
	}
    ind=n;
	while(par1[ind]!=0)
	{
		v4.push_back(ind);
		ind=par1[ind];
	}
	if(v3.size()==0||v4.size()==0)
	{
		cout<<-1<<endl;
	}
	else{
		reverse(v3.begin(),v3.end());
		reverse(v4.begin(),v4.end());
		cout<<max(v3.size(),v4.size())<<endl;
	}
}
