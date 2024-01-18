#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int a_1[5]={0,0,0,0,0};
	int count=0;
	int b_1[5]={0,0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			a_1[0]=a_1[0]+1;
		}
		if(a[i]==2)
		{
			a_1[1]=a_1[1]+1;
		}
		if(a[i]==3)
		{
			a_1[2]=a_1[2]+1;
		}
		if(a[i]==4)
		{
			a_1[3]=a_1[3]+1;
		}
		if(a[i]==5)
		{
			a_1[4]=a_1[4]+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		if(b[i]==1)
		{
			b_1[0]=b_1[0]+1;
		}
		if(b[i]==2)
		{
			b_1[1]=b_1[1]+1;
		}
		if(b[i]==3)
		{
			b_1[2]=b_1[2]+1;
		}
		if(b[i]==4)
		{
			b_1[3]=b_1[3]+1;
		}
		if(b[i]==5)
		{
			b_1[4]=b_1[4]+1;
		}
	}
	int t=0;
	for(int i=0;i<5;i++)
	{
		if((a_1[i]+b_1[i])%2!=0)
		{
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<-1<<endl;
	}
	else {
		for(int i=0;i<5;i++)
		{
			int sum=a_1[i]+b_1[i];
			if(b_1[i]>sum/2)
			{
				count=count+(b_1[i]-(sum/2));
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
	
}
