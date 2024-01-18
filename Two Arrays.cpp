#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
		long long int n,t;
		cin>>n>>t;
		vector< pair <long long int,long long int> > v;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
			v.push_back( make_pair(a[i],i) );
		}
	
	int fl=0;
	long long int b;
	int sa=0;
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]+a[i+1]>=t)
		{
			fl=1;
			b=a[i];
			if(a[i]==a[i+1])
			{
				sa=1;
			}
			break;
		}
	}
	if(fl==0)
	{
		b=a[n-1];
	}
	long long int count=0;
	for(long long int i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			count++;
		}
		 if(a[i]>b)
		{
			break;
		}
	}
	long long int h=0;
	if(sa==1)
	{
	for(int i=0;i<n;i++)
	{
		if(v[i].first<b)
		{
			cout<<"0"<<" ";
		}
		else if(v[i].first==b&&h<=(count/2)-1)
		{
			cout<<"0"<<" ";
			h=h+1;
		}
		else {
			cout<<1<<" ";
		}}
		
	}
	else {
		for(int i=0;i<n;i++)
	{
		if(v[i].first<=b)
		{
			cout<<"0"<<" ";
		}
		else {
			cout<<1<<" ";
		}}
	}}
	return 0;
	
}
