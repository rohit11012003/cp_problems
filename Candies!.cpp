#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int sum1[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		sum1[i]=sum;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a1,b;
		cin>>a1>>b;
		long long int ans;
		ans=sum1[b-1]-sum1[a1-1]+a[a1-1];
		cout<<ans/10<<endl;
	}
	return 0;
}
