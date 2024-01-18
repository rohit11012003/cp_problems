#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		cout<<2<<endl;
	}
	else {
	
	for(int i=1;i<n-1;i++)
	{
		int z=a[i]+k;
		int t=a[i]-k;
		if(t>a[i-1]&&(t-a[i-1])>k)
		{
			count++;
		
		}
		if(a[i+1]>z&&(a[i+1]-z)>=k)
		{
			count++;
		
		}
	}
	if((a[0]+k)<a[1]&&a[1]-(a[0]+k)>=k)
	{
		count++;
	
	}
	if((a[n-1]-k)>a[n-2]&&(a[n-1]-k-a[n-2])>k)
	{
		count++;
	
	}
	cout<<count+2<<endl;}
	return 0;
}

