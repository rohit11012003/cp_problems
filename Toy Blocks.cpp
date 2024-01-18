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
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int count=0;
		for(int i=1;i<n;i++)
		{
			count=count+a[n-1]-a[i];
		}
		if(count>=a[0])
		{
			cout<<count-a[0]<<endl;
		}
		else{
			a[0]=a[0]-count;
			long long int k=a[0]%(n-1);
			if(k==0)
			{
				cout<<0<<endl;
			}
			else{
				cout<<n-1-k<<endl;
			}
		}
	}
}
