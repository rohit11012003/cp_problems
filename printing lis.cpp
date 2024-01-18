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
	vector<int> dp(n,1);
	int prev[n];
	for(int i=0;i<n;i++)
	{
		prev[i]=i;
	}
	int ma=0;
	int ind=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				if(dp[j]+1>dp[i])
				{
					dp[i]=dp[j]+1;
					prev[i]=j;
				}
			}
		}
		if(dp[i]>ma)
		{
			ma=dp[i];
			ind=i;
		}
	}
	cout<<"length of lis is "<<ma<<endl;
	cout<<ind<<endl;
	while(ind!=prev[ind])
	{
		cout<<a[ind]<<" ";
		ind=prev[ind];
	}
	cout<<a[ind];
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<prev[i]<<" ";
	}
	cout<<endl;
	
}
