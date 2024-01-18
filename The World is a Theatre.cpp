#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,m,t;
	cin>>n>>m>>t;
	unsigned long long int a=min(t-1,n);
	unsigned long long int z1=4;
	unsigned long long int b;
	if(t<=m)
	{
		//cout<<"eegeg";
		b=z1;
	}
	else{
	b=max(z1,t-m);
	}
	unsigned long long int count=0;
//	cout<<a<<" "<<b<<endl;
	for(unsigned long long int i=b;i<=a;i++)
	{
		unsigned long long int c=t-i;
		unsigned long long int x1=1;
		unsigned long long int h1=1;
		unsigned long long int h2=1;
		unsigned long long int x2=1;
		//cout<<c<<" "<<i<<endl;
		for(int j=1;j<=i;j++)
		{
			x1=x1*(n-j+1);
			h1=h1*j;
			if(x1%h1==0)
			{
				x1=x1/h1;
				h1=1;
			}
		}
	//	cout<<x1<<endl;
		for(int j=1;j<=c;j++)
		{
			x2=x2*(m-j+1);
			h2=h2*j;
			if(x2%h2==0)
			{
				x2=x2/h2;
				h2=1;
			}
		}
		//cout<<x1<<" "<<x2<<endl;
		count=count+(x1*x2);
	}
	cout<<count<<endl;
	return 0;
}
