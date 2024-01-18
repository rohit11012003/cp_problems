#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,m;
			vector<vector<int> >v1;
		cin>>n>>m;
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
		{
			vector<int> v2;
			for(int j=0;j<m;j++)
			{
				long long int f;
				cin>>f;
				v.push_back(make_pair(f,i));
				
				v2.push_back(f);
			}
			v1.push_back(v2);
		}
		sort(v.begin(),v.end());
		
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=-1;
		}
	}
		for(int i=0;i<n;i++)
		{
			long long int j=v[i].first;
			int g=v[i].second;
			a[g][i]=j;
			
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==-1)
				{
					
				}
			}
		}
	}
}
