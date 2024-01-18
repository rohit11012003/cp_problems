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
			int count;
			int sum=0;
			int e;
		if(n==1)
		{
			cout<<a[0]<<endl;
		}
	
		else {
			sort(a,a+n,greater<int>());
			for(int i=n-1;i>=0;i--)
			{
				if(i==(n-1))
				{
					sum=a[n-1];
					e=a[n-1];
					count=a[n-1];
				}
				else {
					e=a[i]-sum;
					if(a[i]<0)
					{
						sum=sum-a[i];
					}
				else{
					sum=sum+a[i];}
				}
				if(e>count)
				{
					count=e;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
