#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y;
	cin>>x>>y;
	int t=0;
//	cout<<x<<" "<<y<<endl;
	if((y-1)>x)
	{
		t=1;
	}
	else if((x-y-1)%2!=0)
	{
		t=1;
	}
	else if(y<1)
	{
		t=1;
	}
	else if(y==1&&x!=0)
	{
		t=1;
	}
//	cout<<t<<endl;
	if(t==1)
	{
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	return 0;
}
