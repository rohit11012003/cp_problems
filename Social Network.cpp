#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int> v[N];
int vis[N];
void dfs(int ind , int par)
{
	vis[ind]=1;
	for(auto child : v[ind])
	{
		if(child==par||vis[child]==1) continue;
		dfs(child,ind);
	}
}

int main()
{
	int n,d;
	cin>>n>>d;
	for(int i=0;i<d;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	//	cout<<"hello1"<<endl;
		dfs(a,0);
	//	cout<<"hello2"<<endl;
		vector<pair<int , int > > v1;
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==1)
			{
				v1.push_back({v[i].size(),i});
			}
		}
		sort(v1.begin(),v1.end());
		int j=v1[v1.size()-1].second;
		v[j].clear();
		for(int i=1;i<=n;i++)
		{
			if(vis[i]==1&&i!=j)
			{
				v[i].clear();
				v[i].push_back(j);
				v[j].push_back(i);
			}
		}
		for(int i=0;i<=n;i++)
		{
			vis[i]=0;
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if(v[i].size()>ans)
			{
				ans=v[i].size();
			}
		}
		cout<<ans<<endl;
	}
	
}
