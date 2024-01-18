#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<long long int ,long long int  > > v;
	for(int i=0;i<n;i++)
	{
		long long int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			a[i]=v[i].second;
		}
		else{
			if(v[i].second>a[i-1])
			{
				a[i]=v[i].second;
			}
			else{
				a[i]=a[i-1];
			}
		}
	}
	long long int count=0;
	for(int i=1;i<n;i++)
	{
		if(v[i].second<a[i])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
