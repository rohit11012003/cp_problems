#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		long long int sum1;
		long long int sum2;
		sum1=0;
		sum2=a[n-1];
		int z=0;
		if(n%2!=0)
		{
			for(int i=0;i<n/2;i++)
			{
				sum1=sum1+a[i];
				sum2=sum2+a[n-2-i];
				if(sum1>sum2)
				{
					cout<<"YES"<<endl;
					z=1;
					break;
					
				}
			}
		}
		else if(n%2==0)
		{
			for(int i=0;i<n/2-1;i++)
			{
				sum1=sum1+a[i];
				sum2=sum2+a[n-2-i];
				if(sum1>sum2)
				{
					cout<<"YES"<<endl;
					z=1;
					break;
					
				}
			}
		}
		if(z==0)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
