#include<bits/stdc++.h>
using namespace std;
vector<int> g[200005];
vector<int> g1[200005];
void dfs(int vertex,vector<int> &ans,unordered_map<int,int> &m)
{
	sort(g[vertex].begin(),g[vertex].end());
	int p=vertex;
	if(vertex<g[vertex][0])
	{
		for(int i=0;i<g[vertex].size();i++)
		{
			int f=g[vertex][i];
			m[f]--;
			auto it=find(g[f].begin(),g[f].end(),vertex);
			g[f].erase(it);
		}
		ans.push_back(vertex);
	
	}
}
int main()
{
	int n,m1;
	cin>>n>>m1;
	unordered_map<int,int> m;
	unordered_map<int,int> m2;
	for(int i=1;i<=n;i++)
	{
		m2[i]=m2[i]+1;
	}
	for(int i=0;i<m1;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		m2[a]++;
		m2[b]++;
		g[b].push_back(a);
	}
	for(auto it : m2)
	{
		g1[it.first]=g[it.first];
	}

	int q;
	cin>>q;
	m=m2;
	while(q--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int v,u;
			cin>>v>>u;
			g[v].push_back(u);
			m[u]=m[u]+1;
			g[u].push_back(v);
			m[v]=m[v]+1;
		}
		else if(a==2)
		{
		//	cout<<"hello1";
			int u,v;
			cin>>u>>v;
//			for(int i=0;i<g[u].size();i++)
//			{
//				cout<<g[u][i]<<endl;
//			}
			m[u]=m[u]-1;
			//cout<<"hello"<<endl;
			m[v]=m[v]-1;
		auto it = find(g[u].begin(), g[u].end(), v);
		//cout<<"fhd"<<endl;
		//cout<<*it<<endl;
	//	return 0;
		g[u].erase(it);
		//cout<<"NDfn";
		//return 0;
		auto it1= find(g[v].begin(), g[v].end(), u);
		g[v].erase(it1);
		
		}
		else if(a==3)
		{
//			cout<<m.size()<<endl;
//			return 0;
			//cout<<"YRD";
			int check=0;
			while(check<=0)
			{
				vector<int> ans;
				
				for(auto it : m)
				{
					//cout<<"hello";
					if(g[it.first].size()>0)
					{
						dfs(it.first,ans,m);
					}
					
					
				}
				
				if(ans.size()==0)
				{
					check=1;
				}
				
				for(int i=0;i<ans.size();i++)
				{
					//cout<<ans[i]<<endl;
					m.erase(ans[i]);
				}
			//	cout<<"value of t is "<<t<<endl;
			//	return 0;
			}
			cout<<m.size()<<endl;
			m=m2;
			for(auto it : m2)
	{
		g[it.first]=g1[it.first];
	}
//			for(auto it : m)
//			{
//				cout<<it.first<<" "<<it.second<<endl;
//			}
//			return 0;
			//cout<<"HRYd"<<endl;
		//	return 0;
		}
	}
	return 0;
}
