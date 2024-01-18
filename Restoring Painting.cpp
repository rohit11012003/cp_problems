#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	long long int x2,x4,x5;
	long long int count=0;
	for(long long int i=1;i<=n;i++)
	{
		x2=i+b-c;
		x4=i+a-d;
		x5=a+b+i-c-d;
		int z=0;
		if(x2<1||x2>n)
		{
			z=1;
		}
		if(x4<1||x4>n)
		{
			z=1;
		}
		if(x5<1||x5>n)
		{
			z=1;
		}
		if(z==0)
		{
			count=count+n;
		}
	}
	cout<<count<<endl;
	return 0;
}
