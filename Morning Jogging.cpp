#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,m;
		cin>>n>>m;
		vector<vector<int> >v;
		for(int i=0;i<n;i++)
		{	vector<int>v1;
			for(int j=0;j<m;j++)
			{
			
				long long int f;
				cin>>f;
				v1.push_back(f);
			}
			v.push_back(v1);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<v[i][j]<<" ";
			}
		}
	}
}
