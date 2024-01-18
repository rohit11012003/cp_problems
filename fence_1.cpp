#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int count=0;
	vector<pair<long long int,int > > v;
	for(int i=0;i<=k-1;i++)
	{
		count=count+a[i];
		
	}
//	v.push_back(count);
v.push_back({count,0});
	for(int i=0;i<n-k;i++)
	{
		count=count-a[i];
		count=count+a[i+k];
		v.push_back({count,i+1});

	}
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i].first<<" "<<v[i].second<<endl;
//	}
	sort(v.begin(),v.end());
	cout<<v[0].second+1<<endl;
	return 0;
}
