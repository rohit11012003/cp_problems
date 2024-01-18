#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;
		int ans=0;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int mi=-1;
		long long int ma=-1;
		for(int i=0;i<n;i++)
		{
			if(ma==-1||mi==-1)
			{
				ma=a[i];
				mi=a[i];
			}
			else{
				if(a[i]>ma)
				{
					ma=a[i];
				}
				if(mi>a[i])
				{
					mi=a[i];
				}
				if(ma-mi>2*x)
				{
					ans++;
					ma=-1;
					mi=-1;
					i--;
				}
			}
		}
		cout<<ans<<endl;
	}
}
