#include<bits/stdc++.h>
using namespace std;
int bin1(int a[], int b, int n)
{
	int l=0;
	int r=n-1;
	int res=-1;
	while(l<=r)
	{
		int  m=l+(r-l)/2;
		if(a[m]==b)
		{
			res=m;
			r=m-1;
		}
		else{
			if(a[m]>b)
			{
				r=r-1;
			}
			else{
			l=l+1;
			}
		}
	}
	return res;
}
int bin2(int a[], int b, int n)
{
	int l=0;
	int r=n-1;
	int res=-1;
	while(l<=r)
	{
		int  m=l+(r-l)/2;
		if(a[m]==b)
		{
			res=m;
			l=l+1;
		}
		else{
			if(a[m]>b)
			{
				r=r-1;
			}
			else{
			l=l+1;
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
	int fie=bin1(a,b,n);
	int las=bin2(a,b,n);
	int z=las-fie+1;
	if(fie==-1)
	{
		cout<<0<<endl;
	}
	else{
		cout<<las-fie+1<<endl;
	}
}
