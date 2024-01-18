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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int z=0;
		int ans=0;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(z==0)
			{
				if(a[i]==1&&count==0)
				{
					ans=ans+1;
					count++;
				}
			else	if(a[i]==1&&count==1)
				{
					//cout<<"hello";
					i--;
					z=1;
					count=0;
				}
			else	if(a[i]==0&&count==0)
				{
					count++;
				}
			else	if(a[i]==0&&count==1)
				{
					z=1;
					count=0;
				}
			}
			else if(z==1)
			{
				//cout<<i<<" ";
				if(a[i]==0&&count==0)
				{
					count++;
				}
				else if(a[i]==0&&count==1)
				{
					z=0;
					i--;
					count=0;
				}
				else if(a[i]==1&&count==0)
				{
					count++;
				}
			else 	if(a[i]==1&&count==1)
				{
					z=0;
					count=0;
				}
			}
		}
		cout<<ans<<endl;
	}
}
