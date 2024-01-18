#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	/*	for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((j-a[j])==(i-a[i]))
				{
					for(int h=j;h<n;h++)
					{
						if(a[h]!=a[j])
						{
							swap(a[h],a[j]);
							break;
						}
						if(h==n-1)
						{
							swap(a[i],a[j]);
							i=i-1;
						}
					}
				}
			}
		}*/
		sort(a,a+n,greater<int>());
		for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	cout<<endl;
	}
	
	return 0;
}
