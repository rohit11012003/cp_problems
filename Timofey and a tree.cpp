#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int c[N];
int vis[N];
void dfs(int ind , int color, int &z)
{
	vis[ind]=1;
	if(c[ind]!=color)
	{
		z=1;
		return; 
	}
	else{
		for(auto child : v[ind])
		{
			if(vis[child]==1) continue;
			else{
				dfs(child,color,z);
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int, int > > v1;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v1.push_back({a,b});
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	int x1=-1;
	int x2=-1;
	for(int i=0;i<v1.size();i++)
	{
		int z1=v1[i].first;
		int z2=v1[i].second;
		if(c[z1]!=c[z2])
		{
			x1=z1;
			x2=z2;
			break;
		}
	}
	//cout<<x1<<" "<<x2<<endl;
	if(x1==-1)
	{
		cout<<"YES"<<endl;
		cout<<1<<endl;
		}
	
	else{
		vis[x1]=1;
		int z=0;
		for(auto child : v[x1])
		{
			dfs(child,c[child],z);
			if(z==1)
			{
				break;
			}
			
		}
		if(z==0)
		{
			cout<<"YES"<<endl;
			cout<<x1<<endl;
		}
		else{
			for(int i=0;i<1e5+5;i++)
			{
				vis[i]=0;
			}
			vis[x2]=1;
		int z=0;
	//	cout<<"heeelo wprld"<<endl;
		for(auto child : v[x2])
		{
			if(vis[child]==0)
			{
				
			
			dfs(child,c[child],z);}
		//	cout<<child<<" "<<z<<endl;
			if(z==1)
			{
				break;
			}
			
		}
		if(z==1)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<x2<<endl;
		}
		}
	}
}
