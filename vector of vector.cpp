#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int> >v;
	int n;
	cin>>n;
	cout<<"HELLO";
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		vector<int> v1;
		for(int j=0;j<m;j++)
		{
			int x;
			cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	cout<<v[0][0];
	return 0;
}
