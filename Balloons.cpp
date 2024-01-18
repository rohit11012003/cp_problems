#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int min=0;
	int t=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		cout<<-1<<endl;
	}
	else if(n==2)
	{
		if(a[0]==a[1])
		{
			cout<<-1<<endl;
		}
		else{
			for(int i=0;i<n;i++)
		{
			if(a[i]<a[min])
			{
				min=i;
			}
		}
		cout<<1<<endl;
		cout<<min+1<<endl;
		}
	}
	else {
		for(int i=0;i<n;i++)
		{
			if(a[i]<a[min])
			{
				min=i;
			}
		}
		cout<<1<<endl;
		cout<<min+1<<endl;
	}
	return 0;
	
}
