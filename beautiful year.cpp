#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int e;
	for(int i=1;i>0;i++)
	{
		n=n+1;
		e=n;
		int a,b,c,d;
		a=n/1000;n=n-a*1000;
		b=n/100;n=n-b*100;
		c=n/10;n=n-c*10;
		d=n/1;
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
		{
			break;
		}
		n=e;
	}
	cout<<e;
return 0;
}
