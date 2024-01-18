#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int sum=0;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		sum=sum+x*a[i];
		if(x>1)
		{
			x=x-1;
		}
		
	}
	cout<<sum<<endl;
	return 0;
}
