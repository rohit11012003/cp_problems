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
	long long t=0;
	for(long long int i=0;i<n;i++)
	{
		if(a[i]>a[t])
		{
			t=i;
		}
	}
	int v=0;
	for(long long int i=t;i<n-1;i++)
	{
		if(a[i+1]>a[i])
		{
			v=1;
			break;
		}
	}
	if(v==0)
	{
	for(long long int i=0;i<t;i++)
	{
		if(a[i]>a[i+1])
		{
			v=1;
			break;
		}
	}}
	if(v==1)
	{
		cout<<"NO"<<endl;
	}
	else if(v==0)
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
