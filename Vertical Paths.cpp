#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >v_ans;
 
vector<int> g[200005];

vector<int> v1;
void dfs(int vertex,int par,int root,int vis[])
{
	//cout<<"vertex is "<<vertex <<"perent is "<<par<<endl;
	if(vis[vertex]==0)
	{
	v1.push_back(vertex);
	vis[vertex]=1;
}
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		if(g[child].size()==1)
		{
			
			v1.push_back(child);
			vis[child]=1;
			v_ans.push_back(v1);
			v1.clear();
		}
		else{
			
		
		//cout<<child<<" "<<par<<endl;
		
		//cout<<"vertex is "<<vertex<<" child is "<<child<<endl;
		dfs(child,vertex,root,vis);}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int root;
		for(int i=1;i<=n;i++)
		{
			int a;
			cin>>a;
			if(a==i)
			{
				root=a;
			}
			else{
				g[a].push_back(i);
				g[i].push_back(a);
			}
		}
		int vis[n+1];
		for(int i=0;i<=n;i++)
		{
			vis[i]=0;
		}
	if(n==1)
	{
		cout<<1<<endl;
		cout<<1<<endl;
		cout<<1<<endl;
	}
	else{
		
	
		dfs(root,0,root,vis);
//		v_ans.push_back(v1);
		cout<<v_ans.size()<<endl;
		for(int i=0;i<v_ans.size();i++)
		{
			cout<<v_ans[i].size()<<endl;
			for(int j=0;j<v_ans[i].size();j++)
			{
				cout<<v_ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
			v_ans.clear();
		v1.clear();
		for(int i=0;i<=n;i++)
		{
			g[i].clear();
		}
	}
	return 0;
}
