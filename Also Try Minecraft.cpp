#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int ans1[n];
	long long int sum=0;
	for(int i=0;i<n-1;i++)
	{
		long long int z=a[i]-a[i+1];
		if(z>0)
		{
			sum=sum+z;
			
		}
		ans1[i]=sum;
	}
	long long int sum2=0;
	ans1[n-1]=sum;
	long long int ans2[n];
	for(int i=n-1;i>0;i--)
	{
		//cout<<sum2<<" ";
		long long int z=a[i]-a[i-1];
		if(z>0)
		{
			sum2=sum2+z;
		}
		ans2[i]=sum2;
	}
	//cout<<endl;
	ans2[0]=sum2;
	
	while(m--)
	{
		int s,t;
		cin>>s>>t;
		s=s-1;
		t=t-1;
		if(t>s)
		{
			long long int q=ans1[t];
			if(t!=n-1)
			{
				if(a[t+1]<a[t])
				{
					q=q-(a[t]-a[t+1]);
				}
			}
			if(s!=0)
			{
				q=q-ans1[s-1];
			}
			cout<<q<<endl;
		}
		else if(t==s)
		{
			cout<<0<<endl;
		}
		else{
			long long int q=ans2[t];
			if(t!=0)
			{
				if(a[t]>a[t-1])
				{
					q=q-(a[t]-a[t-1]);
				}
			}
			if(s!=n-1)
			{
				q=q-ans2[s+1];
			}
			cout<<q<<endl;
		}
	}
	return 0;
}
