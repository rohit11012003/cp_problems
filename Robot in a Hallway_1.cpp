#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		long long int  a[2][m];
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		long long int ans=0;
		for(int i=1;i<m;i++)
		{
			if(a[0][i]<=ans)
			{
				ans=ans+1;
			}
			else{
				ans=a[0][i]+1;
			}
		}
		for(int j=m-1;j>=0;j--)
		{
			if(a[1][j]<=ans)
			{
				ans=ans+1;
			}
			else{
				ans=a[1][j]+1;
			}
		}
		long long int ans1=0;
		ans1=a[1][0]+1;
		for(int j=1;j<m;j++)
		{
			if(j%2==0)
			{
				
				if(a[0][j]<=ans1)
				{
					ans1=ans1+1;
					
				}
				else{
					ans1=a[0][j]+1;
				}
					if(a[1][j]<=ans1)
				{
					ans1=ans1+1;
				}
				else{
					ans1=a[1][j]+1;
				}
			}
			else{
				if(a[1][j]<=ans1)
				{
					ans1=ans1+1;
				}
				else{
					ans1=a[1][j]+1;
				}
				if(a[0][j]<=ans1)
				{
					ans1=ans1+1;
					
				}
				else{
					ans1=a[0][j]+1;
				}
			}
		}
		cout<<min(ans,ans1)<<endl;
	}
}
