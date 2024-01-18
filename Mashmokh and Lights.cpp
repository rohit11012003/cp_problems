#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	int b[n];
	int s,e;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		if(i==0)
		{
			s=a[i]-1;
			e=n;
		for(int j=s;j<e;j++)
		{
			b[j]=a[i];
			cout<<"helno"<<endl;
		}}
		else if(a[i]<=s)
		{
			e=s;
			s=a[i]-1;
			for(int j=s;j<e;j++)
		{
			b[j]=a[i];
		}
		cout<<"hello"<<endl;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
