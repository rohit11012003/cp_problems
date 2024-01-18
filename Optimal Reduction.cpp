#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ind ;
		int ma;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			
			cin>>a[i];
			if(i==0)
			{
				ind=0;
				ma=a[i];
			}
			else{
				if(a[i]>ma)
				{
					ma=a[i];
					ind=i;
				}
			}
		}
		if(ind==0)
		{
			int z=0;
			for(int i=1;i<n;i++)
			{
				if(a[i]>a[i-1])
				{
					z=1;
					break;
				}
			}
			if(z==0)
			
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(ind==n-1)
		{
			int z=0;
			for(int i=0;i<n-1;i++)
			{
				if(a[i]>a[i+1])
				{
					z=1;
					break;
				}
			}
			if(z==0)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			int z=0;
			for(int i=0;i<ind;i++)
			{
				if(a[i]>a[i+1])
				{
					z=1;
					break;
				}
			}
			for(int i=ind;i<n-1;i++)
			{
				if(a[i]<a[i+1])
				{
					z=1;
					break;
				}
			}
			if(z==0)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
	}
}
