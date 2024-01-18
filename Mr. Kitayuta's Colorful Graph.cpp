#include<bits/stdc++.h>
using namespace std;
const int N=105;
vector<pair<int,int> > v[N];
int vis[N];
void dfs1(int ind ,int tar,int &z, int col)
{
	if(ind==tar)
	{
		z++;
		return;
	}
	vis[ind]=-1;
	for(auto child : v[ind])
	{
	int val=child.first;
	int col1=child.second;
	if(vis[val]==-1) continue;
	if(col1!=col) continue;
	dfs1(val,tar,z,col);		
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v[a].push_back({b,c});
		v[b].push_back({a,c});
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		int ans=0;
		for(auto child : v[a])
		{
			vis[a]=-1;
			int z=0;
			int val=child.first;
			int col=child.second;
			dfs1(val,b,z,col);
			ans=ans+z;
			for(int i=0;i<N;i++)
			{
				vis[i]=0;
			}
		}
		cout<<ans<<endl;
	}
	
}
