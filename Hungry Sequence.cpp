#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int> v;
	for(int i=1;i<=n;i++)
	{
		long long int g=pow(10,6)+i;
		v.push_back(g);
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
