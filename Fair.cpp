#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int a[N];
int vis[N];
int level[105][N];
void bfs(int ty, int n)
{
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		if(a[i]==ty)
		{
			q.push(i);
		//	cout<<i<<" "<<a[i]<<" ";
		//	cout<<i<<" "<<a[i]
			vis[i]=1;
		}
		
	}
	//cout<<endl;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(auto child : v[curr])
		{
			if(vis[child]==1) continue;
			level[ty][child]=level[ty][curr]+1;
			q.push(child);
			vis[child]=1;
		}
		
	}
	for(int i=0;i<1e5+5;i++)
	{
		vis[i]=0;
	}
}
int main()
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		int d,b;
		cin>>d>>b;
		d=d-1;
		b=b-1;
		v[d].push_back(b);
		v[b].push_back(d);
	}
//	cout<<"hello2"<<endl;
	for(int i=1;i<=k;i++)
	{
		bfs(i,n);
	}
//	cout<<"hello1"<<endl;
	for(int i=1;i<=k;i++)
	{
		for(int j=0;j<n;j++)
		{
		//	cout<<level[i][j]<<" ";
		}
	//	cout<<endl;
	}
	vector<vector<int> > v1;
	for(int i=0;i<n;i++)
	{
		vector<int> v2;
		for(int j=1;j<=k;j++)
		{
			v2.push_back(level[j][i]);
		}
		v1.push_back(v2);
	}
	for(int i=0;i<n;i++)
	{
		vector<int> v2=v1[i];
		sort(v2.begin(),v2.end());
		int count=0;
		for(int j=0;j<s;j++)
		{
			count=count+v2[j];
		}
		cout<<count<<" ";
	}
	cout<<endl;

}
