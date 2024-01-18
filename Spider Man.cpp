#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i]-1;
		if(sum%2==0)
		{
			cout<<2<<endl;
		}
		else {
			cout<<1<<endl;
		}
	}
	return 0;
}
