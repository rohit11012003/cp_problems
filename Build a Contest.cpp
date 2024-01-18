#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int,int > > v;
	map<int,int> m;
	for(int i=0;i<m;i++)
	{
		int h;
		cin>>h;
		v.insert({h,i});
		m[h]=m[h]+1;
	}
	int mi;
	for(auto it=m.begin();it!=m.end();it++)
	{
		if(it==m.begin())
		{
			mi=*(it).second;
		}
		else{
			if(*(it).second<mi)
			{
				mi=*(it).second;
			}
		}
	}
	sort(v.begin(),v.end());
	vector<vector<int, int > >v1;
	vector<int> v2;
	for(int i=0;i<m;i++)
	{
	int t=v[i].first;
	for(int j=i;j<m;j++)
	{
		if(v[j].first==k)
		{
			v2.push_back(v[j].second)
		}
		else{
			v1.push_back(v2);
			v2.clear();
			i=j-1;
		}
	}
	
	}
	
}
