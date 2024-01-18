#include<bits/stdc++.h>
using namespace std;
int main()

{
	long long int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		long long int sum1=0;
		long long int sum2=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
			sum1=sum1+a[i];
		}
		
			i=i+1;
			if(i==n)
			{
				break;
			}
			else{
				if(a[i]%2!=0)
				{
				
				sum2=sum2+a[i];}
			}
		}
		if(sum1==sum2)
		{
			cout<<"Tie"<<endl;
		}
		else if(sum1>sum2)
		{
			cout<<"Alice"<<endl;
		}
	   else if(sum2>sum1)
	   {
	   	cout<<"Bob"<<endl;
	   }
	}
	return 0;
}
