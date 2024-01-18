#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int ans=0;
		long long int z=0;
		for(int i=0;i<n;i++)
		{
			long long int t=a[i];
			int j=i;
			long long int count=0;
			while(a[j]==t)
			{
				count++;
				j++;
				if(j==n)
				{
					break;
				}
			}
			ans=ans+(count/t);
			z=z+(count%t);
			ans=ans+(z/t);
			z=z%t;
			i=j-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
