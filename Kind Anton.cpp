#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int f;
	cin>>f;
	for(int w=0;w<f;w++)
	{
	
	long long int n;
	cin>>n;
	long long int v1[n];
	long long int v2[n];
	int x=0;
	int y=0;
	long long int a=0;
	long long int b=0;
	long long int c=0;
	long long int d=0;
	for(long long int d=0;d<n;d++);
	{
		cin>>v1[d];
		if(v1[d]==1&&x==0)
		{
			a=d;
			x=1;
		}
		else if(v1[d]==-1&&y==0)
		{
			b=d;
			y=1;
		}
	}
	if(x==0)
	{
		a=n-1;
	}
	if(y==0)
	{
		b=n-1;
	}
	for(int i=0;i<n;i++)
	{
		cin>>v2[i];
	}
	if(b>a)
	{
		int fg=0;
		for(int i=0;i<=a;i++)
		{
			if(v2[i]!=v1[i])
			{
				cout<<"NO"<<endl;
				fg=1;
				break;
			}
		}
		if(fg==0)
		{
		
		for(int i=a+1;i<b;i++)
		{
			if(v2[i]<v1[i])
			{
				cout<<"NO"<<endl;
				fg=1;
				break;
			}}}
			if(fg==0)
			{
			else if(v2[b]<-1)
			{
				cout<<"NO"<<endl;
				fg=1
			}
		
		
	}
	if(fg==0)
	{
	
	if(b<a)
	{
			for(int i=0;i<=b;i++)
		{
			if(v2[i]!=v1[i])
			{
				cout<<"NO"<<endl;
				fg=;
				break;
			}
		}
		if(fg==0)
		{
			
		
		for(int i=b+1;i<a;i++)
		{
			if(v2[i]>v1[i])
			{
				cout<<"NO"<<endl;
				fg=1;
				break;
			
			}}}
			if(fg==0)
			{
				
			
			else if(v2[a]>1)
			{
				cout<<"NO"<<endl;
				fg==1;
			}}
		}
		
	}
	if(fg==0)
	{
		
	if(a==b)
	{
		for(int i=0;i<=a;i++)
		{
			if(v1[i]!=v2[i])
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}}
	cout<<"YES"<<endl;}
	}
	return 0;
}
