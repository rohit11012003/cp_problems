#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<long long int > >v;
	for(int i=0;i<(2*n)-1;i++)
	{
		vector<long long int > l;
		for(int j=0;j<i+1;j++)
		{
			long long int h;
			cin>>h;
			l.push_back(h);
			
		}
		v.push_back(l);
	}
	vector<vector<long long int > > v1;
	for(int i=0;i<2*n;i++)
	{
		vector<long long int > a;
		if(i!=0)
		{
			for(int j=0;j<v[i-1].size();j++)
			{
				a.push_back(v[i-1][j]);
			}
		}
		for(int j=i;j<(2*n)-1;j++)
		{
			a.push_back(v[j][i]);
		}
		v1.push_back(a);
		
	}
	vector<pair<int,int> > v2;
	for(int i=0;i<v1.size();i++)
	{
		sort(v1[i].begin(),v1[i].end(), greater<int>());
	//	v2.push_back({v1[i][0],i});
	}
	
	return 0;
}
