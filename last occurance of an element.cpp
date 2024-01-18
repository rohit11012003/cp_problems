#include<bits/stdc++.h>
using namespace std;
int binary(int a[], int b, int n)
{
	int l=0;
	int r=n-1;
	int res=-1;
	while(l<=r)
	{
		int m=l+(r-l)/2;
		if(a[m]==b)
		{
			res=m;
			l=l+1;
		}
		else{
			if(a[m]>b)
			{
				r=m-1;
			}
			else{
				l=m+1;
			}
		}
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b;
	cin>>b;
	cout<<binary(a,b,n);
}
