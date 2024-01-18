#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int y;
	int ma;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			ma=a[0];
			y=0;
		}
		else {
			if(a[i]>ma)
			{
				ma=a[i];
				y=i;
			}
		}
		
	}
	int g=y;
	int v=0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			v=1;
			break;
		}
		
	}
	if(v==0)
	{
		cout<<0<<endl;
	}
	else{
	
	int le=0;
	int re=0;
	if(y!=n-1)
	{
		
		for(int i=y;i<n;i++)
		{
			if(a[i+1]!=a[i])
			{
				g=i;
				break;
			}
		}
		if(g!=n-1)
		{
			
		
	for(int i=g+1;i<n-1;i++)
	{
		if(a[i+1]<a[i])
		{
			re=1;
			break;
		}
	}}}
	if(y!=0)
	{
		
	
	for(int i=y-1;i>0;i--)
	{
		if(a[i-1]>a[i])
		{
			le=1;
			break;
		}
	}}
	
	if(le==1||re==1)
	{
		cout<<-1<<endl;
		return 0;
	}
	else {
		if(g!=n-1)
		{
			if(a[n-1]>a[0])
			{
				cout<<-1<<endl;
			}
			else {
				cout<<n-1-g<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
	}}
	return 0;
	
}
