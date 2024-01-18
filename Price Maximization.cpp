#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int k;
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int ans=0;
		int b[n];
		for(int i=0;i<n;i++)
		{
			b[i]=a[i]%k;
			ans=ans+a[i]/k;
		}
		sort(b,b+n);
		int l=0;
		int r=n-1;
		while(r>l)
		{
			if(b[l]+b[r]>=k)
			{
				ans++;
				l++;
				r--;
			}
			else{
				l++;
			}
		}
		cout<<ans<<endl;
	}
}
