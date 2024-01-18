#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n,l;
	cin>>n>>l;
	int a[n];
	long long int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		count=count+a[i];
	}
	vector<int> v;
	for(int i=l;i<=count;i++)
	{
		int z=count/i;
		v.push_back(i*z);
	}
	sort(v.begin(),v.end(),greater<int>());
	cout<<v[0]<<endl;
	return 0;
}
