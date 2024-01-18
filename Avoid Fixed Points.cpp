#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long int n;
		cin>>n;
	long long 	int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	long long	int count=0;
	long long 	int b=1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==i+b)
			{
				count=count+1;
				b=b+1;
			}
		}
		cout<<count<<endl;
		
	}
	return 0;
}
