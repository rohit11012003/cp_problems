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
		vector<pair<int,int > > v;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			v.push_back({a[i],i});
		}
		sort(a,a+n);
		sort(v.begin(),v.end());
		long long int ans=0;
		int z=n-1;
		vector<pair<int,int > > ans1;
		for(int i=n-2;i>=0;i--)
		{
			if(v[z].first>v[i].first)
			{
				v[z].first=v[z].first-v[i].first;
				for(int j=0;j<v[i].first;j++)
				{
					ans1.push_back({v[i].second+1,v[z].second+1});
				}
			}
			else{
				v[i].first=v[i].first-v[z].first;
				for(int j=0;j<v[z].first;j++)
				{
					ans1.push_back({v[i].second+1,v[z].second+1});
				}
				z=i;
			}
		}
		cout<<ans1.size()<<endl;
		for(int i=0;i<ans1.size();i++)
		{
			cout<<ans1[i].first<<" "<<ans1[i].second<<endl;
		}
	}
}
