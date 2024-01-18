#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int ind[n];
	long long int h[n];
	for(int i=0;i<n;i++)
	{
		cin>>ind[i];
		cin>>h[i];
	}
	int a[n];
	a[0]=0;
	int ans=2;
	for(int i=1;i<n-1;i++)
	{
		int p=0;
		if(a[i-1]==0)
		{
			if(ind[i-1]<ind[i]-h[i])
			{
				ans++;
				a[i]=0;
				p=1;
			}
			else{
				if(ind[i+1]>ind[i]+h[i])
				{
					ans++;
					a[i]=1;
					p=1;
				}
			}
			
		}
		else{
			if(ind[i-1]+h[i-1]<ind[i]-h[i])
			{
				ans++;
				a[i]=0;
				p=1;
			}
			else{
				if(ind[i+1]>ind[i]+h[i])
				{
					ans++;
					a[i]=1;
					p=1;
				}
			}
		}
		if(p==0)
		{
			a[i]=0;
		}
	}
	cout<<ans<<endl;
}
