#include<bits/stdc++.h>
using namespace std;
void print()
{
	cout<<"helloe"<<endl;
}
int binary(int a[], int b, int n)
{
	int l=0;
	int r=n-1;
	while(l<=r)
	{
		int m=l+(r-l)/2;
		if(a[m]==b)
		{
			return m;
		}
		else{
			if(a[0]>a[n-1])
			{
				if(a[m]>b)
				{
					l=m+1;
				}
				else{
					r=m-1;
				}
			}
			else if(a[0]<a[n-1])
			{
			//	print();
				if(a[m]>b)
				{
				//	print();
					r=m-1;
				}
				else{
					l=m+1;
				}
			}
		}
	}
	return -1;
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

