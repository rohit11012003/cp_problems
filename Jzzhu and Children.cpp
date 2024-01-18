#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int count=0;
	int t=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int z;
		if(a[i]%m==0)
		{
			z=a[i]/m;
		}
		else {
			z=(a[i]/m)+1;
		}
		if(i==0)
		{
			count=z;
			t=i+1;
		}
		else if(z>=count)
		{
			count=z;
			t=i+1;
		}
		
	}
	cout<<t<<endl;
	
}
