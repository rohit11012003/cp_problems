#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int m,t;
	m=max((3*a)/10,a-((a*c)/250));
	t=max((3*b)/10,b-((b*d)/250));
	if(m>t)
	{
		cout<<"Misha"<<endl;
	}
	else if(t>m)
	{
		cout<<"Vasya"<<endl;
	}
	else {
		cout<<"Tie"<<endl;
	}
	return 0;
}
