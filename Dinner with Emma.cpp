#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> v[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int t;
			cin>>t;
			v[i].push_back(t);
		}
	}
	for(int i=0;i<n;i++)
	{
		sort(v[i].begin(),v[i].end());
	}
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(v[i][0]>t)
		{
			t=v[i][0];
		}
	}
	cout<<t<<endl;
	return 0;
}
