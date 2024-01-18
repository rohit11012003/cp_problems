#include<bits/stdc++.h>
using namespace std;
int main()
{
long 	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		int n;
		cin>>n;
	long long 	int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int f=0;
	long long 	int b=floor(n/2);
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int c=0;
				long long int g=a[j]%a[i];
				for(int v=0;v<n;v++)
				{
					if(a[v]>g)
					{
						break;
					}
					if(g==a[v])
					{
						c=1;
						break;
					}}
					if(c==0)
					{
						cout<<a[j]<<" "<<a[i]<<endl;
						f++;
					}
				if(f==b)
				{
					break;
				}
			}
			if(f==b)
			{
				break;
			}
		}
	}
}
