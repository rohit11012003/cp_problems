#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int x1,y1,z1,x2,y2,z2;
		cin>>x1>>y1>>z1;
		cin>>x2>>y2>>z2;
		long long int sum=0;
		if(z1>y2)
		{
			sum=sum+(y2)*2;
			z1=z1-y2;
			if(z2>(z1+x1))
			{
				z2=z2-z1-x1;
				sum=sum-min(z2,y1)*2;
			}
			cout<<sum<<endl;
		}
		else if(y2>=z1)
		{
			sum=sum+z1*2;
			if(z2>x1)
			{
				z2=z2-x1;
				sum=sum-min(z2,y1)*2;
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
