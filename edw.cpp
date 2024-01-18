#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long int n,s;
	cin>>n>>s;
	if(n==1&&s==1)
	{
		cout<<"NO"<<endl;
	}
	else if(n==1&&s!=1)
	{
		cout<<"YES"<<endl;
		cout<<s<<endl;
		cout<<s/2<<endl;
	}
	else{
		if(s==n)
		{
			cout<<"NO"<<endl;
		}
		else{
			int t=0;
			int z;
			for(int i=n;i<=s-n;i++)
			{
				if(s-i>=n&&s-i<=s-n)
				{
					t=1;
					z=i;
					break;
				}
			}
			if(t==0)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
				for(int i=1;i<n;i++)
				{
					cout<<1<<" ";
				}
				cout<<s-n+1<<endl;
				cout<<z<<endl;
			}
		}
	}
	return 0;
}
