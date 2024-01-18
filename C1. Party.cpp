#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
vector<int> v1[N];
vector<vector<int> > v3;
int vis[N];
void dfs(int ind , vector<int> &v4)
{
	vis[ind]=1;
	v4.push_back(ind);
	for(auto child : v[ind])
	{
		if(vis[child]==1) continue;
		dfs(child, v4);
	}
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	while(k--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int m;
	cin>>m;
	vector<pair<int,int > > dis;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		dis.push_back({a,b});
		v1[a].push_back(b);
		v1[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==1) continue;
		vector<int> v2;
		dfs(i, v2);
		v3.push_back(v2);
    }
   // cout<<"connected components are "<<endl;
    int a[n+1];
    for(int i=0;i<v3.size();i++)
    {
    	for(int j=0;j<v3[i].size();j++)
    	{
    		//cout<<v3[i][j]<<" ";
    		a[v3[i][j]]=i;
		}
		//cout<<endl;
	}
	vector<pair<int, int > > dislike;
	for(int i=0;i<dis.size();i++)
	{
		int a1=dis[i].first;
		int b=dis[i].second;
		//cout<<a[a1]<<" dislike "<<a[b]<<endl;
		dislike.push_back({a[a1], a[b]});
	}
	vector<int> v5;
	int check[n+1];
	for(int i=0;i<=n;i++)
	{
		check[i]=0;
	}
	for(int i=0;i<dislike.size();i++)
	{
		if(dislike[i].first==dislike[i].second)
		{
			//cout<<"fea";
			check[dislike[i].first]=1;
		}
	}
	for(int i=0;i<v3.size();i++)
	{
		if(check[i]==0)
		{
			v5.push_back(v3[i].size());
		}
	}
	if(v5.size()==0)
	{
		cout<<0<<endl;
	}
	else{
		
	
	sort(v5.begin(), v5.end());

	cout<<v5[v5.size()-1]<<endl;
}
	
	

}
