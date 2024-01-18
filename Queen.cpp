#include<bits/stdc++.h>
using namespace std;
vector<int> g[100005];
int c_value[100005];
vector<int> ans;
void  dfs2(int vertex,int par,int &t)
{
	cout<<"hello"<<endl;
	cout<<"vertex is "<<vertex<<"  parent is "<<par<<endl;
	for(auto child: g[vertex])
	{
		if(child==par) continue;
		if(c_value[child]==0)
		{
			t=0;
			break;
			
		}
	}
	
	 cout<<"value of t is "<<t<<endl;
	 
}
void dfs(int vertex,int par)
{
	cout<<"vertex is "<<vertex<<"  parent is "<<par<<endl;
	int j=0;
	for(auto child: g[vertex])
	{
		
		if(child==par)
		{
		continue;
		  j++;
		  }
		  else{
		  	
		  
		int t=1;
		if(c_value[child]==1)
		{
			dfs2(child,vertex,t);
	//	return 0;
		if(t==0)
		{
			dfs(child,vertex);
			j++;
		}
		else{
			ans.push_back(child);
			//g[vertex].erase(g[vertex].begin()+j);
			int ind=g[child][0];
			
			for(int i=0;i<g[child].size();i++)
			{
				g[vertex].push_back(g[child][i]);
				g[g[child][i]].push_back(vertex);
			}
			g[child].clear();
			if(j==0)
			{
				dfs(vertex,par);
			}
			else{
				dfs(min(g[vertex][j-1],ind),vertex);
			}}
		}
		else{
			dfs(child,vertex);
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
			c_value[i]=b;
		}
		else{
			c_value[i]=b;
			g[i].push_back(a);
			g[a].push_back(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		sort(g[i].begin(),g[i].end());
	}
//	cout<<"root is "<<root;
//	return 0;
	dfs(root,-1);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return  0;
	
}
