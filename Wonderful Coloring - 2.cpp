#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+1];
		int b[n];
		int ans[n];
		for(int i=0;i<n;i++)
		{
			a[i]=0;
			cin>>b[i];
		}
		a[n]=0;
		for(int i=0;i<n;i++)
		{
			a[b[i]]++;
			if(a[b[i]]>k)
			{
				a[b[i]]--;
				ans[i]=0;
			}
			else{
				ans[i]=a[b[i]];
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
