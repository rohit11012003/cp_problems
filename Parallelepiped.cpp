#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int a,b,c;
	c=pow(y*z/x,0.5);
	b=c*x/y;
	a=x/b;
	cout<<4*(a+b+c)<<endl;
	return 0;
}
