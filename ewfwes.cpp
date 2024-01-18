#include<bits/stdc++.h>
using namespace std;
const int N=10000;
vector<pair<int , int > > v[N];
int dfs(int ind , int color[], int par, int &amount, int amount1)
{
	int z=amount1;
	for(auto it : v[ind])
	{
		if(it.first==par)
		{
			continue;
		}
		else{
			if(color[it.first]==0)
			{
				
				cout<<ind<<" "<<it.first<<" "<<it.second<<endl;
				cout<<color[it.first]<<endl;
				amount=amount+amount1+it.second;
				
				dfs(it.first,color,ind,amount,0);
			}
			else{
				int p=z+it.second;
				dfs(it.first,color,ind,amount,p);
				
			}
		}
	}
}
int main()
{
//	vector<int> colcor;
cout<<"helloe"<<endl;
	int n;
	cin>>n;
	cout<<n<<endl;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		int cost;
		cin>>cost;
		v[a].push_back({b,cost});
		v[b].push_back({a,cost});
	}
	int color[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>color[i];
	}
	int ind=-1;
	for(int i=1;i<=n;i++)
	{
		if(color[i]==0)
		{
			ind=1;
			break;
		}
	}
	if(ind==-1)
	{
		cout<<0<<endl;
	}
	else{
		int amount=0;
		dfs(ind, color,-1, amount,0);
		cout<<amount<<endl;
	}
}
