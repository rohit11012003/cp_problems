#include<bits/stdc++.h>
using namespace std;
int main()
{
long long	int t;
	cin>>t;
	for(long long int l=0;l<t;l++)
	{
		int t=0;
		long long int r,g,b,w;
		cin>>r>>g>>b>>w;
		if(r%2==0&&g%2==0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
	else 	if(r%2==0&&g%2==0&&b%2==0&&w%2!=0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2==0&&g%2==0&&b%2!=0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2==0&&g%2!=0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2!=0&&g%2==0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else {
			if(r>0&&g>0&&b>0)
			{
				r=r-1;
				g=g-1;
				b=b-1;
				w=w+3;

		if(r%2==0&&g%2==0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else 	if(r%2==0&&g%2==0&&b%2==0&&w%2!=0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2==0&&g%2==0&&b%2!=0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2==0&&g%2!=0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
		else if(r%2!=0&&g%2==0&&b%2==0&&w%2==0)
		{
			cout<<"YES"<<endl;
			t=1;
		}
			}
		}
		if(t==0)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
