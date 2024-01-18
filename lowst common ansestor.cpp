//calculating lowest common ansector
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> v[N];
//vector<int> path_1;
//vector<int> path_2;
int par[N];
void dfs(int vertex,int par1=0)
{
	for(auto child : v[vertex])
	{
		if(child==par1) continue;
		par[child]=vertex;
		dfs(child,vertex);
	}
}
vector<int> cal_path(int x)
{
	vector<int> v;
	while(x!=0)
	{
		v.push_back(x);
		x=par[x];
	}
	reverse(v.begin(),v.end());
	return v;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		cout<<par[i]<<" ";
	}
	cout<<endl;
	
int x1,x2;
cin>>x1>>x2;
vector<int> path_1=cal_path(x1);
vector<int> path_2=cal_path(x2);

int lowest_common;
	for(int i=0;i<min(path_1.size(),path_2.size());i++)
	{
		if(path_1[i]==path_2[i])
		
		{
			lowest_common=path_1[i];
		}
		else {
			break;
		}
	}
	cout<<lowest_common<<endl;
}
