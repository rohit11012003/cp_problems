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
		ans[i]=INT_MAX;
	}
	ans[0]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j+a[i]<=s;j++)
		{
			if(ans[j+a[i]]>ans[j]+1)
			{
				ans[j+a[i]]=ans[j]+1;
			}
		}
	}
	for(int i=0;i<=s;i++)
	{
		cout<<ans[i]<<" ";
	}
}
