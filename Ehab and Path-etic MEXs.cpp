#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int level[N];
int vis[N];
void dfs(int ind)
{
	queue<int> q;
	q.push(ind);
	vis[ind]=-1;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(auto child : v[curr])
		{
			if(vis[child]==-1) continue;
			vis[child]=-1;
			level[child]=level[curr]+1;
			q.push(child);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	unordered_map<pair<int, int> , int> m;
	vector<pair<int, int> > v1;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		
		v[a].push_back(b);
		v[b].push_back(a);
		m[{a,b}]=m[{a,b}]-1;
		v1.push_back{a,b};
	}
	int p=0;
	int ind =-1;
	for(int i=1;i<=n;i++)
	{
		if(v[i].size()>2)
		{
			p=1;
			ind=1;
			break;
		}
	}
	if(p==0)
	{
		for(int i=0;i<n-2;i++)
		{
			cout<<i<<endl;
		}
	}
	else{
		int count=0;
		for(auto child : v[ind])
		{
			
			if(child<ind)
			{
				m[{child,ind}]=count;
				count++;
			}
			else{
				m[{ind, child}]=count;
				count++;
			}
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		if(m[v[i]]==-1)
		{
			m[v[i]]=count;
			count++;
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		cout<<m[v[i]]<<endl;
	}
	
	
	
}
