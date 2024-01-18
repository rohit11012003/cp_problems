#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		long long int b;
		cin>>b;
		b=abs(b);
		a[i]=b;
	}
	sort(a,a+n);
	long long int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=0)
		{
			long long int val=2*a[i];
		auto it=upper_bound(a+i,a+n,val);
		if(it==a+n)
		{
			count=count+n-i-1;
		}
		else{
			long long int z=it-a;
			//cout<<z<<endl;
			count=count+z-1-i;
		}
	}
	}
	cout<<count<<endl;
}
