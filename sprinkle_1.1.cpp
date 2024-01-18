#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	int n;
 	cin>>n;
 	long long int a[n];
 	long long int b[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		
	 }
	 	for(int i=0;i<n;i++)
 	{
 		cin>>b[i];
 		
	 }
	 sort(a,a+n);
	 sort(b,b+n);
	int ind=-1;
	for(int i=0;i<n;i++)
	{
		if(b[i]!=1){
			ind=i;
			break;
		}
	}
	if(ind==-1)
	{
		ind=n;
	}
	int p=0;
	long long int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum=sum+a[i];
		if(ind<(i+1)*(a[i+1])-sum)
		{
			p=1;
			ind = i+1;
			break;
		}
	}
	if(p==0)
	{
		ind=ind-(n-1)*(a[n-1])+sum;
		int z=ind/n;
		int p=ind%p;
		for(int i=0;i<n-1;i++)
		{
			a[i]=a[n-1]+z;
		}
		a[n-1]=a[n-1]+z;
		for(int i=0;i<p;i++)
		{
			a[i]=a[i]+1;
		}
	}
	else{
		cout<<"hello";
		cout<<" "<<ind<<endl;
		cout<<sum<<endl;
		for(int i=0;i<ind;i++)
		{
			a[i]=a[ind-1];
		}
		ind =ind - (ind-1)*(a[ind-1])+sum-a[ind-1];
		cout<<"ind "<<ind<<endl;
		int z=ind/ind-1;
		int p=ind%p;
		for(int i=0;i<ind;i++)
		{
			a[i]=a[i]+ind;
		}
		for(int i=0;i<p;i++)
		{
			a[i]=a[i]+1;
		}
	}
	long long int ans=1;
	for(int i=0;i<n;i++)
	{
		ans=ans*a[i];
	}
	cout<<ans<<endl;
 }
