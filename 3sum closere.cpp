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
		if(n==3)
		{
			if(a[0]==-(a[1])||a[0]==-(a[2])||a[1]==-(a[2]))
			{
				cout<<"YES"<<endl;
				
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(n>3)
		{
			int z1=0;
			int z2=0;
			if(a[0]!=-(a[n-1]))
			{
				z1=1;
			}
			for(int i=1;i<n-1;i++)
			{
				if(a[i]!=0)
				{
					z2=1;
					break;
				}
			}
			if(z1==0&&z2==0)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
