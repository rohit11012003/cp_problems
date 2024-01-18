#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m1;
	cin>>n>>m1;
	vector<int> v;
	for(int i=0;i<m1;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==b)
		{
			v.push_back(a);
	}
	else{
		for(int j=a;j<=b;j++)
		{
			v.push_back(j);
		}
	}
		
	}
	vector<pair<int,int >  >v1;
	int t=0;
	map<int,int>m;
	for(int i=0;i<v.size();i++)
	{
		m[v[i]]=m[v[i]]+1;
	}
	for(auto ma  : m)
	
	{
		if(ma.second>=2)
		{
			t=1;
			v1.push_back({ma.first,ma.second});
		}
	}
	vector<int> v2;
	for(auto ma:m)
	{
		v2.push_back(ma.first);
	}
//	for(int i=0;i<v2.size();i++)
//	{
//		cout<<v2[i]<<" ";
//	}
	int k=0;
	//int u=1;
	for(int i=1;i<=n;i++)
	{
		if(m[i]==0)
		{
			k=1;
			v1.push_back({i,0});
		}
	}
//	for(int i=0;i<v1.size();i++)
//{
//		cout<<v1[i].first<<" "<<v1[i].second<<endl;
//	}
	if(k==0&&t==0)
	{
		cout<<"OK"<<endl;
	}
	else{
		sort(v1.begin(),v1.end());
		
			cout<<v1[0].first<<" "<<v1[0].second<<endl;
		
	}
	
	return 0;
	
	
}
