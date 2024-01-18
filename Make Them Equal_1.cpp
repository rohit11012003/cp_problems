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
	sort(a,a+n);
	int t=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]!=a[i])
		{
			t++;
		}
	}
	if(t>3)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(t==2)
	{
		if((a[n-1]-a[0])%2==0)
		{
			cout<<(a[n-1]-a[0])/2<<endl;
		}
		else {
			cout<<a[n-1]-a[0]<<endl;
		}
	}
	else if(t==3)
	{
		int j;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]!=a[i])
			{
				j=i+1;
				break;
			}
		}
		if(a[j]-a[0]==a[n-1]-a[j])
		{
			cout<<a[n-1]-a[j]<<endl;
		}
		else {
			cout<<-1<<endl;
		}
	}
	else if(t==1)
	{
		cout<<0<<endl;
	}
	return 0;
}
