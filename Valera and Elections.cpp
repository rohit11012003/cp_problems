#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int, int > > v[N];
vector<int> ans;
int z=-1;
void dfs(int ind, int par)
{
	for(auto child : v[ind])
	{
		int a=child.first;
		int b=child.second;
		if(a==par) continue;
		else{
			if(z==-1&&b==1)
			{
				dfs(a,ind);
			}
			else{
				z=a;
				dfs(a,ind);
			}
		}
		
	}
//	cout<<ind<<" "<<z<<endl;
	if(z!=-1)
	{
		ans.push_back(z);
		z=-1;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b,t;
		cin>>a>>b>>t;
		v[a].push_back({b,t});
		v[b].push_back({a,t});
	}

	dfs(1,0);
	cout<<ans.size()<<endl;
	if(ans.size()!=0)
	{
		
	
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
	}
	
}
