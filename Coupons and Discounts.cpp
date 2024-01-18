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
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(t==1&&a[i]==0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(a[i]%2==0&&t==0)
		{
			t=0;
		}
		else if(a[i]%2!=0&&t==1)
		{
			t=0;
		}
		else if(a[i]!=0&&t==0)
		{
			t=1;
		}
		else if(a[i]%2==0&&t==1)
		{
			t=1;
		}
	}
	if(t==1)
	{
		cout<<"NO"<<endl;
	}
	else if(t==0)
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
