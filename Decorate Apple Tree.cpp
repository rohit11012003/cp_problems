#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int sub[N];
void dfs(int ind , int par)
{
	for(auto child : v[ind])
	{
		if(child==par) continue;
		dfs(child,ind);
		
			
		
		sub[ind]=sub[ind]+sub[child];
		
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int a;
		cin>>a;
		v[a].push_back(i);
		v[i].push_back(a);
	}
	vector<int> ans;
	for(int i=1;i<=n;i++)
	{
		if(v[i].size()==1&&i!=1)
		{
			sub[i]=1;
		}
	}
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		ans.push_back(sub[i]);
	}
	sort(ans.begin(),ans.end());
	if(n==1)
	{
		cout<<1<<endl;
	}
	else{
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;}
	
}
