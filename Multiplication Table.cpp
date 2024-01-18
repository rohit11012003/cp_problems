#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
long long 	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	long long int z=(a[0][1]*a[0][n-1])/a[1][n-1];
	vector<long long int> v;
	z=pow(z,0.5);
	v.push_back(z);
	for(int i=1;i<n;i++)
	{
		long long int j=a[0][i]/z;
		v.push_back(j);
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}
