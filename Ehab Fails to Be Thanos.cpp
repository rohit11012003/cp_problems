#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	n=n*2;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			t=1;
			break;
		}
	}
	if(t==0)
	{
		cout<<-1<<endl;
	}
	else if(t==1)
	{
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
