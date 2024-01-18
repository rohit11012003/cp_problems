#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c,d,e;
	a=n/100;n=n%100;
	b=n/20;n=n%20;
	c=n/10;n=n%10;
	d=n/5;n=n%5;
	e=n/1;
	cout<<(a+b+c+d+e);
	return 0;
	
}
