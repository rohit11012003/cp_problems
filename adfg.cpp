#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h;
	cin>>h;
	while(h--)
	{
		//cout<<"hello"<<endl;
		int n;
		cin>>n;
		long long int a[n];
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum==0)
		{
			cout<<0<<endl;
		}
		else{
		
		sort(a,a+n);
		sum=sum-a[n-1];
		if(sum>=a[n-1])
		{
			cout<<1<<endl;
		}
		else{
			cout<<a[n-1]-sum<<endl;
		}
	}}
	return 0;
}
