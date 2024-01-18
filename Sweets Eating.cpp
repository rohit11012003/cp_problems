#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	
	int sum[n];
	int sum1=0;
	for(int i=0;i<n;i++)
	{
		sum1=sum1+a[i];
		sum[i]=sum1;
	}
	long long int sum2[n];
	for(int i=0;i<m;i++)
	{
		sum2[i]=a[i];
	}
	for(int i=m;i<n;i++)
	{
		sum2[i]=sum2[i-m]+a[i];
	}
	long long int ans[n];
	for(int i=0;i<m;i++)
	{
		if(i==0)
		{
			ans[i]=a[i];
		}
		else{
			ans[i]=a[i]+ans[i-1];
		}
	}
	for(int i=m;i<n;i++)
	{
		ans[i]=ans[i-1]+sum2[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
