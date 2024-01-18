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
	int c=0;
	int b=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]%2==0)
		{
			c++;
		}
		else {
			b++;
		}
	}
	if(c>b)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2!=0)
			{
				cout<<i+1<<endl;
				return 0;
			}
		}
	}
	else if(b>c)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<i+1<<endl;
				return 0;
			}
		}
	}
}
