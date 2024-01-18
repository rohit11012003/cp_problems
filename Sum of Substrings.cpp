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
		string s;
		cin>>s;
		int a=-1;
		int b=-1;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				a=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{if(s[i]=='1')
			{
				b=i;
				break;
			}
		}
		if(a==-1)
		{
			cout<<0<<endl;
		}
		else{
			if(a==b)
			{
				if(k>=n-1-b)
				{
					cout<<1<<endl;
				}
				else if(k>=a)
				{
					cout<<10<<endl;
				}
				else{
					cout<<11<<endl;
				}
			}
			else{
				int ans=0;
				int count=0;
				for(int i=0;i<n;i++)
				{
					if(s[i]=='1')
					{
						count++;
					}
				}
				if(k>=n-1-b)
				{
					count--;
					ans=ans+1;
					k=k-(n-1-b);
				}
				if(k>=a)
				{
					count--;
					ans=ans+10;
					k=k-a;
				}
				ans=ans+(count*11);
				cout<<ans<<endl;
			}
		}
		
		
	}
	return 0;
}
