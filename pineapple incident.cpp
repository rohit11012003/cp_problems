#include<iostream>
using namespace std;
int main()
{
	int t,s,x;
	cin>>t>>s>>x;
	int a=t;
	int d=0;
	int b=0;
	int e=1;
	if(a==x)
	{
		d=1;
	}
	else {
	while(a<x)
	{
		if(b%2==0)
		{
			a=t+(e*s);
			b++;
			e++;
		}
		else {
			a=a+1;
			b++;
		}
		if(a==x)
		{
	     	d=1;
			 break;	
		}
	}}
	if(d==1)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
