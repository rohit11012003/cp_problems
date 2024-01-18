#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	long long int count=0;
	sort(a,a+n,greater<int>());
	if(n==1)
	{
		cout<<a[0]<<endl;
		return 0;
	}
	else if(n==2)
	{
		cout<<2*sum<<endl;
		return 0;
	}
	else if(n>2)
	{
		count=count+sum;
		for(int i=n;i>=2;i--)
		if(i==2)
		{
			count=count+sum;
		}
		else {
		
		{
			
			count=count+sum;
			sum=sum-a[i-1];
		}
	}
	cout<<count<<endl;
	return 0;
	}
	return 0;
}

