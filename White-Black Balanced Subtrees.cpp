#include<bits/stdc++.h>
using namespace std;
vector<int> g[100005];

void dfs(int vertex,int par,int count[],string &s)
{
//	cout<<"vertex is "<<vertex<<" par is "<<par <<" s[vertex] is "<<s[vertex-1]<<endl;
	if(s[vertex-1]=='B')
	{
		count[vertex]--;
	}
	else{
		count[vertex]++;
	}
//	cout<<"count of vertex is "<<count[vertex]<<endl;
	for(auto child : g[vertex])
	{
		if(child==par) continue;
		dfs(child,vertex,count,s);
		count[vertex]+=count[child];
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
		for(int i=2;i<=n;i++)
		{
			int a;
			cin>>a;
			g[a].push_back(i);
			g[i].push_back(a);
		}
		string s;
		cin>>s;
		int count[n+1];
		for(int i=0;i<=n;i++)
		{
			count[i]=0;
		}
		dfs(1,0,count,s);
		int count1=0;
		for(int i=1;i<=n;i++)
		{
			if(count[i]==0)
			count1++;
		}
		cout<<count1<<endl;
//		for(int i=1;i<=n;i++)
//		{
//			cout<<count[i]<<endl;
//		}
	for(int i=0;i<=n;i++)
	{
		g[i].clear();
	}
	}
	return 0;
}
