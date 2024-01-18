#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int vis[N];
vector<int> v[N];
void dfs(int ind, int par,int &p)
{
	vis[ind]=1;
	for(auto child: v[ind])
	{
		if(child==par) continue;
		if(vis[child]==1){
			p=1;
			return ;
		}
		dfs(child, ind,p);
	
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
	int p=0;
	dfs(1,0,p);
	if(p==0)
	{
		cout<<"NO cycle"<<endl;
	}
	else if(p==1)
	{
		cout<<"cycle is present "<<endl;
	}
	
}
