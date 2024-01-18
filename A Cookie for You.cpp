#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int f=0;
		long long int a,b,n,m;
		cin>>a>>b>>n>>m;
		if(n>=m)
		{
			long long int x=min(a,b);
			long long int y=max(a,b);
			
			if((a+b)<(n+m))
			{
				f=1;
			}
			else if (x<m)
			{
				f=1;
			}
			
		}
		else{
			
			long long int x=min(a,b);
			long long int y=max(a,b);
			if((a+b)<(n+m))
			{
				f=1;
			}
			else if(x<m)
			{
				f=1;
			}
		}
		if(f==0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
