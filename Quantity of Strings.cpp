#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	if(k>n)
	{
		cout<<0<<endl;
	}
	else{
		long long int ans=1;
		if(k==1)
		{
			for(int i=0;i<n;i++)
			{
				ans=ans*m;
				ans=ans%(1000000007);
			}
			if(k==2)
			{
				cout<<m<<endl;
			}
			else{
				ans=0;
				for(int i=1;i<=m;i++)
				{
					long long int ans1=1;
					for(int j=0;j<i;j++)
					{
						ans1=ans1*(m-j);
						ans1=ans1%1000000007; 
					}
					ans=ans+ans1;
					ans=ans%1000000007;
				}
				cout<<ans<<endl;
				
			}
		}
	}
}
