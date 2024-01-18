#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int z=0;
	long long int sum1=0;
	long long int sum2=0;
	// bob-0
	// alice-1
	for(int i=0;i<n;i++)
	{
		long long int sum3=sum1;
		long long int sum4=sum2;
		long long int p;
		long long int diff1=sum1-sum2;
		long long int diff2=sum2-sum1;
		long long int z2;
	
		int ind=i;
		if(z==0)
		{
		for(int j=i;j<n;j++)
		{
			if(j==i)
			{
				p=sum3+a[i];
				if(p-sum4>diff1)
				{
					ind =j;
					diff1=p-sum4;
					z2=sum4;
				
				}}
				else{
					p=sum3+a[j];
					sum4=sum4+a[j-1];
					
					if(p-sum4>diff1)
					{
						ind=j;
						diff1=p-sum4;
						z2=sum4;
					}
				}
			
		}
		
		sum1=sum1+a[ind];
		sum2=z2;


		i=ind;
		z=1;
		cout<<ind<<" "<<sum1<<" "<<sum2<<endl;
	}
	else{
		for(int j=i;j<n;j++)
		{
			if(j==i)
			{
				p=sum4+a[i];
				if(p-sum3>diff2)
				{
					ind =j;
					diff2=p-sum3;
					z2=sum3;
				}}
				else{
					p=sum4+a[j];
					sum3=sum3+a[j-1];
					
					if(p-sum3>diff2)
					{
						ind=j;
						diff2=p-sum3;
						z2=sum3;
					}
				}
			
		}
		sum2=sum2+a[ind];
		sum1=z2;
		i=ind;
		z=0;
	}
		
	}
	cout<<sum2<<" "<<sum1<<endl;
}
