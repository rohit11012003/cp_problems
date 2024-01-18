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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int z=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i-1]!=i)
			{
				z=1;
				break;
			}
		}
		if(z==0)
		{
			cout<<0<<endl;
		}
		else{
			int st=0;
			int la=0;
			for(int i=1;i<=n;i++)
			{
				if(a[i-1]!=i)
				{
					st=i;
					break;
				}
			}
			for(int j=n;j>=1;j--)
			{
				if(a[j-1]!=j)
				{
					la=j;
					break;
				}
			}
			int p=0;
			for(int i=st;i<=la;i++)
			{
				if(a[i-1]==i)
				{
					p++;
				}
			}
			if(p==0)
			{
				cout<<1<<endl;
			}
			else{
				cout<<2<<endl;
			}
		}
	}
}
