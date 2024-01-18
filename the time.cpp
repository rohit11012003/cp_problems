#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
   getline(cin,s);
	int n;
	cin>>n;
	int g=n/1440;
	n=n-(1440)*g;
	string p=s.substr(0,2);
	stringstream str;
	str<<p;
	int a;
	str>>a;
	string o=s.substr(3,2);
	stringstream ty;
	ty<<o;
	int b;
	ty>>b;
	int h=n/60;
	n=n-60*h;
	a=a+h;
	b=b+n;
	if(b>=60)
	{
		b=b-60;
		a=a+1;
	}
	if(a>=24)
	{
		a=a-24;
	}
	if(a<10&&b<10)
	{
		cout<<"0"<<a<<":"<<"0"<<b<<endl;
	}
	else if(a<10&&b>=10)
	{
		cout<<"0"<<a<<":"<<b<<endl;
	}
	else if(a>=10&&b<10)
	{
		cout<<a<<":"<<"0"<<b<<endl;
	}
	else {
		cout<<a<<":"<<b<<endl;
	}

	return 0;
}
