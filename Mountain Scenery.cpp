#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	n=2*n+1;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=1;i<n-1;i++)
	{
		if(i%2!=0)
		{
			int z=a[i];
			a[i]=a[i]-1;
			if(a[i]>a[i-1]&&(a[i]>a[i+1]))
			{
				count++;
			}
			else {
			a[i]=z;
			}
			
		}
		if(count==k)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
