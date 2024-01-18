#include<bits/stdc++.h>
using namespace std;
const int N=55;
int vis[N][N];
vector<pair<int , int > > v1[2505];
void dfs(vector<string> &v, int i, int j, int n, int m)
{
	//cout<<"hellop1"<<endl;
	vis[i][j]=-1;
	if(i+1<n)
	{
		if(v[i+1][j]=='.'&&vis[i+1][j]==0)
		{
			dfs(v,i+1,j,n,m);
		}
		
	}
	if(i-1>=0)
	{
		if(v[i-1][j]=='.'&&vis[i-1][j]==0)
		{
			dfs(v,i-1,j,n,m);
		}
	}
	if(j+1<m)
	{
		if(v[i][j+1]=='.'&&vis[i][j+1]==0)
		{
			dfs(v,i,j+1,n,m);
		}
	}
	if(j-1>=0)
	{
		if(v[i][j-1]=='.'&&vis[i][j-1]==0)
		{
			dfs(v,i,j-1,n,m);
		}
	}

}
void dfs1(vector<string> v, int i, int j, int n, int m, int z)
{
	v1[z].push_back({i,j});
	vis[i][j]=1;
	if(i+1<n)
	{
		if(v[i+1][j]=='.'&&vis[i+1][j]==0)
		{
			dfs1(v,i+1,j,n,m,z);
		}
		
	}
	if(i-1>=0)
	{
		if(v[i-1][j]=='.'&&vis[i-1][j]==0)
		{
			dfs1(v,i-1,j,n,m,z);
		}
	}
	if(j+1<m)
	{
		if(v[i][j+1]=='.'&&vis[i][j+1]==0)
		{
			dfs1(v,i,j+1,n,m,z);
		}
	}
	if(j-1>=0)
	{
		if(v[i][j-1]=='.'&&vis[i][j-1]==0)
		{
			dfs1(v,i,j-1,n,m,z);
		}
	}
	
	
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<string>v;
	for(int i=0;i<n;i++)
	{
		//cout<<"GEs";
		string s;
		cin>>s;
		v.push_back(s);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==0||j==0||i==n-1||j==m-1)
			{
				if(vis[i][j]==0&&v[i][j]=='.')
				{
					dfs(v,i,j,n,m);
				}
			}
		}
	}
	//cout<<"hedjbv";
	int z=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(vis[i][j]==0&&v[i][j]=='.')
			{
			dfs1(v,i,j,n,m,z);
			z++;
		}
		}
	}
	
    vector<pair< int, vector<pair<int, int > > > > v3; 	
    for(int i=1;i<55;i++)
    {
    	if(v1[i].size()==0)
    	{
    		break;
		}
		else{
			int z=v1[i].size();
			v3.push_back({z,v1[i]});
		}
	}
	sort(v3.begin(),v3.end());
	if(v3.size()==k)
	{
		cout<<0<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<v[i][j];
			}
			cout<<endl;
		}
	}
	else{
		int count=0;
		int z3=0;
		for(int i=0;i<v3.size()-k;i++)
		{
			count=count+v3[i].first;
			vector<pair<int , int > > v4=v3[i].second;
			for(int j=0;j<v4.size();j++)
			{
				int x=v4[j].first;
				int y=v4[j].second;
				v[x][y]='*';
			}
		}
		cout<<count<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<v[i][j];
			}
			cout<<endl;
		}
	}
	
	
}
