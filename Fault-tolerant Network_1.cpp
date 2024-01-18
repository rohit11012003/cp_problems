#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		vector<pair<long long int ,int> > v1,v2,v3,v4;
		for(int i=0;i<n;i++)
		{
			v1.push_back({abs(a[0]-b[i]),i});
		}
		for(int i=0;i<n;i++)
		{
			v2.push_back({abs(a[n-1]-b[i]),i});
		}
		for(int i=0;i<n;i++)
		{
			v3.push_back({abs(b[0]-a[i]),i});
		}
		for(int i=0;i<n;i++)
		{
			v4.push_back({abs(b[n-1]-a[i]),i});
		}
		long long int price=0;
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		sort(v3.begin(),v3.end());
		sort(v4.begin(),v4.end());
		price=price+v1[0].first;
		price+=v2[0].first;
		if(v1[0].second!=0&&v2[0].second!=0)
		{
			price+=v3[0].first;
		}
		if(v1[0].second!=0&&v2[0].second!=n-1)
		{
			price+=v3[0].first;
		}
		cout<<price<<endl;
		}
}
