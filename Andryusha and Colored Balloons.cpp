#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int> v[N];
int ans[N];
int co[N];
void dfs(int ind, int par)
{
	for(auto child : v[ind])
	{
		if(child==par) continue;
	//	cout<<"ind and co[ind] is "<<ind<<" "<<co[ind]<<endl;
	//	cout<<ans[ind]<<" "<<ans[par]<<endl;
	
		for(int i=co[ind];i<N;i++)
		{
			if(i!=ans[ind]&&i!=ans[par])
			{
				//cout<<"i is "<<i<<endl;
				ans[child]=i;
				co[ind]=i+1;
				break;
			}
		}
		dfs(child,ind);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		co[i]=1;
	}
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	ans[1]=1;
	dfs(1,0);
	unordered_map<int, int> m;
	for(int i=1;i<=n;i++)
	{
		m[ans[i]]=m[ans[i]]+1;
	}
	cout<<m.size()<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" " ;
	}
}
