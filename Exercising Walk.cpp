#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int a,b,c,d;
		cin>>a>>b>>c>>d;
		int v=0;
		long long int x,y,x1,x2,y1,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		if(x==x1&&x==x2)
		{
			if(a!=0||b!=0)
			{
				cout<<"NO"<<endl;
				v=1;
			}
		}
		else if(y==y1&&y==y2)
		{
			if(d!=0||c!=0)
			{
				cout<<"NO"<<endl;
				v=1;
			}
		}
		else {
		
		if(x-a+b<x1||x-a+b>x2)
		{
			cout<<"NO"<<endl;
			v=1;
		}
		if(v==0)
		{
			if(y-c+d<y1||y-c+d>y2)
			{
				cout<<"NO"<<endl;
				v=1;
			}
		}
		
	}
	if(v==0)
		{
			cout<<"YES"<<endl;
		}}
	return 0;
}
