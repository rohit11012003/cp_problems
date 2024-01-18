#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int v=0;v<t;v++)
	{
		int n;
		cin>>n;
		vector<pair<int,int> > v;
		string s;
		for(int i=0;i<n;i++)
		{
			int a;
			int b;
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
	
	int yo=0;
	vector<int> s1;
	vector<int> m1;
	v.sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		for(int i=1;i<=v[i].first;i++)
		{
			s=s+'R';
		}
		int f=v[i].first;
		int se=v[i].second;
		int mi=v[i].second;
		int j=i;
		while(v[j].first==f)
		{
			if(v[j].second>se)
			{
				se=v[j].second;
			}
			else if(v[j]<mi)
			{
				mi=v[j].second;
			}
		}
		s1.push_back(se);
		m1.push_back(mi);
		if(i!=0)
		{
			
		}
	}
	}
}
