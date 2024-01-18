#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int vis[N];
int vis1[N];
vector<int> ans;
void dfs(int ind, int &count, int par, int &p)
{
	if(vis[ind]==1)
	{
		return ;
	}
	vis[ind]=1;

	
		count++;
		for(auto child : v[ind])
		{
			if(vis[child]==1&&child!=par) 
			{
				p=1;
				return ;
			}
			if(vis[child]==1) continue;
			dfs(child,count,ind,p);
			
		}
	ans.push_back(ind);
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v1;
	for(int i=0;i<k;i++)
	{
		int a;
		cin>>a;
		v1.push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		int t;
		cin>>t;
		while(t--)
		{
			int a;
			cin>>a;
			v[i].push_back(a);
		}
	}
	//cycle detection 

		
	int p=0;
	 int count=0;
	for(int i=0;i<v1.size();i++)
	{
		if(vis[v1[i]]!=1)
		{
			dfs(v1[i], count,0,p);
		}
	}
	if(p==1)
	{
		cout<<-1<<endl;
	}
	else{
		
	
	cout<<count<<endl;
	//sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
}
