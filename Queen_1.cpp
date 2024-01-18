#include<bits/stdc++.h>
using namespace std;
vector<int> g[1000005];
int c_value[1000005];
int parent[1000005];
vector<int> ans;
void dfs(int vertex,int par)
{
	//cout<<"vertx is "<<vertex<<" parent is "<<par<<endl;
	if(c_value[vertex]==1)
	{
		//cout<<"yes "<<endl;
		int z=1;
		for(auto child : g[vertex])
		{
		//	cout<<"child is "<<child<<" parent is "<<par<<endl;
			if(child==par) continue;
			if(c_value[child]==0)
			{
				z=0;
				break;
			}
		}
		if(z==1)
		{
			ans.push_back(vertex);
			for(int i=0;i<g[vertex].size();i++)
			{
				if(g[vertex][i]==par) continue;
				g[g[vertex][i]].push_back(par);
				g[par].push_back(g[vertex][i]);
			//	cout<<"last line parent is "<<par<<" g[vetrreec][i]== "<<g[vertex][i]<<endl;
				parent[g[vertex][i]]=par;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int root;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==-1)
		{
			root=i;
			parent[i]=-1;
			c_value[root]=b;
		}
		else{
			c_value[i]=b;
			g[i].push_back(a);
			g[a].push_back(i);
			parent[i]=a;
		}
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i,parent[i]);
	}
	if(ans.size()==0)
	{
		cout<<-1<<endl;
	}
	else{
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
