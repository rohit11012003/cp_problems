#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long int count=1;
	long long int sum=a[0];
	for(int i=1;i<n;i++)
	{
		if(sum<=a[i])
		{
			count++;
		}
		sum=sum+a[i];
	}
	cout<<count<<endl;
	return 0;
}
