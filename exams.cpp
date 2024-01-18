#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int t=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			int z=n-i-j;
			if(z<0)
			{
				break;
			}
			if((3*i)+(4*j)+(5*z)==k)
			{
				t=1;
				break;
			}
		
		}
			if(t==1)
			{
				break;
			}
}

if(t==1)
{
	cout<<0<<endl;
}
else{

for(int i=1;i<=n;i++)
{
	for(int j=0;j<n;j++)
	{
		for(int p=0;p<n;p++)
		{
			int z=n-i-j-p;
			if(z<0)
			{
				break;
			}
			if((2*i)+(3*j)+(4*p)+(5*z)==k)
			{
				 t=1;
				break;
			}
		}
		if(t==1)
		{
			break;
		}
	}
	if(t==1)
	{
		cout<<i<<endl;
		break;
	}
}
}
return 0;
}
