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
	int ans[n];
	if(n%2==0)
	{
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				ans[i]=i+2;
			}
			else{
				ans[i]=i;
			}
		}
	}
	else{
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				ans[i]=1;
			}
			else{
				if(i%2!=0)
				{
					ans[i]=i+2;
				}
				else{
					ans[i]=i;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
}
