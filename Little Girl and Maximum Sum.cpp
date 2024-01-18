#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=0;
	}
	while(q--)
	{
		int x1,x2;
		cin>>x1>>x2;
		x1=x1-1;
		x2=x2-1;
		for(int i=x1;i<=x2;i++)
		{
			b[i]++;
		}
	}
	sort(b,b+n);
	sort(a,a+n);
	long long int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans+a[i]*b[i];
	}
	cout<<ans<<endl;

}
