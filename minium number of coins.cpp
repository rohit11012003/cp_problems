#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s;
	cin>>s;
	int ans[s+1];

	for(int i=0;i<=s;i++)
	{
		ans[i]=INT_MAX-2;
	}
	ans[0]=0;
//	cout<<ans[0]<<endl;
	for(int i=1;i<=s;i++)
	{
		for(int j=0;j<n;j++)
		{
			//cout<<i<<" "<<a[j]<<endl;
			if(i>=a[j])
			{
			//	cout<<i<<" "<<ans[i-a[j]]<<" "<<ans[i]<<endl;
				if(ans[i]>ans[i-a[j]]+1)
				{
					ans[i]=ans[i-a[j]]+1;
					cout<<i<<" "<<ans[i]<<endl;
				}
			}
		}
	}
	//cout<<ans[s-2]<<endl;
	for(int i=0;i<=s;i++)
	{
		cout<<ans[i]<<" ";
	}
	
}
