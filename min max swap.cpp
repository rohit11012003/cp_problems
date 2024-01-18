#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<n;i++)
		{
			int e=max(a[i],b[i]);
			int f=min(a[i],b[i]);
			a[i]=e;
			b[i]=f;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>a[i])
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(b[j]>b[i])
				{
					swap(b[i],b[j]);
				}
			}
		}
		cout<<a[0]*b[0]<<endl;
	}
	return 0;
}
