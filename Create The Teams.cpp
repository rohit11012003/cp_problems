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
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int teams=n;
		int ans=0;
		for(int i=n-1;i>=0;i--)
		{
			cout<<a[i]<<" "<<x<<endl;
			teams=teams-1;
			if(a[i]>x)
			{
				ans++;
			}
			else{
				long long int z=x/a[i];
				long long int y=x%a[i];
				if(y==0)
				{
					if(teams-(z-1)>=0)
					{
						ans++;
						teams=teams-(z-1);
					}
				}
				else{
					if(teams-z>=0)
					{
						teams++;
						teams=teams-z;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
