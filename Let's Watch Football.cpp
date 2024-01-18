#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int t;
	if(b>=a)
	{
		cout<<0<<endl;
	}
	else
	{
	if((a*c)%b==0)
	{
		t=a*c/b;
	}
	else {
		t=(a*c/b)+1;
	}
	cout<<t-c<<endl;
	}
	return 0;


}
