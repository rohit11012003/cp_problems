#include<bits/stdc++.h>
using namespace std;
int binarySearch( long long int  arr[],long long int l,long long int r, long long int x)
{
  long long  int t=l+(r-l)/2;
   if(arr[t]==x)
   {
   	return t+1;
   }
   if(t>0)
   {
    if(arr[t]>x&&arr[t-1]<x)
    {
    	return t;
	}
	else {
		if(x>arr[t])
		{
			l=t+1;
			binarySearch(arr,l,r,x);
		}
		else if(x<arr[t]) {
			r=t-1;
			binarySearch(arr,l,r,x);
			
		}
	}
   }
  
   
}
int main()
{
	long long int n;
	cin>>n;
	long long int  x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	long long int q;
	cin>>q;
	long long int  m[q];
	for(int i=0;i<q;i++)
	{
		cin>>m[i];
	}
	sort(x,x+n);
	int g=0;
	for(int i=0;i<q;i++)
	{
	long long int z=m[i];
	if(z<x[0])
	{
		cout<<0<<endl;
	}
	else if(z>=x[0]&&z<x[1])
	{
		cout<<1<<endl;
	}
	else if(z>=x[n-1])
	{
		cout<<n<<endl;
	}
	else {
	
	cout<<	binarySearch(x,0,n-1,z)<<endl;
	}}
	return 0;
}

