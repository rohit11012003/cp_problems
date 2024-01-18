#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int a[n];
	long long int sum=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a,a+n);
	long long int t=1;
	long long int z=0;
for(int i=0;i<n-1;i++)
{
	if(t>a[n-1])
	{
		z=z+a[i]-1;
	}
	else{
		
	
	if(a[i]>1)
	{
		if(a[i]>=t)
		{
			z=z+a[i]-1;
			t++;
		}
		else {
			z=z+a[i]-1;
		}
	}
	if(a[i]==1)
	{
		if(t==1)
		
		{
			t++;
		}
	}
	}
	
}
//cout<<z<<endl;
//cout<<t<<endl;
if(t>a[n-1])
{
	z=z+a[n-1]-1;
}
else{
	z=z+t-1;
}
cout<<z<<endl;
	return 0;
	
}
