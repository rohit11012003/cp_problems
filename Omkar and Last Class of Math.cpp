#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n%2==0)
		{
			cout<<n/2<<" "<<n/2<<endl;
		}
		else{
		int g=0;
		for(long long int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
			  cout<<n/i<<" "<<n-n/i<<endl;
			  g=1;	
			}
		}
		if(g==0)
		{
			cout<<1<<" "<<n-1<<endl;
		}
		}
	}
	return 0;
}
