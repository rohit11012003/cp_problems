#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	long long	int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>=a)
		{
			cout<<b<<endl;
		}
	else if(d>=c)
		{
			cout<<-1<<endl;
		}
		else{
		long long	int e=c-d;
		long long	int f=a-b;
			if(f%e==0)
			{
			long long	int q=f/e;
				cout<<(q*c)+b<<endl;
			}
			else {
			long long	int q=f/e;
				cout<<((q+1)*c)+b<<endl;
			}
		}
	}
	return 0;
}
