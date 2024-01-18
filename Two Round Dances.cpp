#include<bits/stdc++.h>
using namespace std;
 unsigned long long int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else{
	
	long long int x=1;
	int g=1;
	while(g<=n)
	{
		x=x*g;
		g++;
	}
	return x;
	}
}
int main()
{
	//cout<<fact(16)<<endl;
	int n;
	cin>>n;
	int t=n/2;
//	cout<<fact(n)<<endl;
//	cout<<fact(t)<<endl;
//	cout<<"hello"<<endl;
unsigned long long int z=(fact(n))/(fact(t)*fact(t)*fact(2));
z=z*fact(t-1)*fact(t-1);
	cout<<z<<endl;
	return 0;
	
}
