#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<vector <int> > v;
	for(int i=0;i<n;i++)
	{
		vector<int> h;
		cin>>a[i];
		for(int j=30;j>=0;j--)
		{
			h.push_back((a[i]>>j)&1);
		}
		v.push_back(h);
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=30;j++)
		{
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}
