#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<long long int>v;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			v.push_back(a[i]+a[j]);
		}
	}
	sort(v.begin(),v.end());
	long long int count=1;
	long long int ma=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]==v[i-1])
		{
			count++;
		}
		else {
			if(count>ma)
			{
				ma=count;
			}
			count=1;
			}
	}
	cout<<ma<<endl;
	return 0;
}
