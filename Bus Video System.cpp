#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,w;
	cin>>n>>w;
	vector<long long int > v;
	long long int count=0;
	v.push_back(0);
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		count=count+a[i];
		v.push_back(count);
		
	}
	sort(v.begin(),v.end(),greater<int>());
	//cout<<v[n]<<endl;
	long long int p=w-v[0];
	if(v[0]>w||abs(v[n])>w)
	{
		cout<<0<<endl;
		return 0;
	}
	if(v[n]>=0)
	{
	if(p==0)
	{
		cout<<1<<endl;
	}
	else{
		cout<<p+1<<endl;
	}}
	else{
		long long int z=abs(v[n]);
	//	cout<<z<<" "<<p<<endl;
		cout<<p-z+1<<endl;
		
	}
	return 0;
}
