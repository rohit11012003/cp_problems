#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1;
	cin>>x1>>y1;
	int x2,y2;
	cin>>x2>>y2;
	int a,b;
	if(x1==x2)
	{
		a=4;
	}
	else {
		a=abs(x1-x2)+1;
		a=2*a;
	}
	if(y1==y2)
	{
		b=4;
	}
	else {
		b=abs(y1-y2)+1;
		b=2*b;
	}
	cout<<a+b<<endl;
	return 0;
}
