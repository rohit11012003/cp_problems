#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a,b;
     cin>>a;
     cin>>b;
	stringstream str;
	str<<a[1];
	int x;
	str>>x;
	stringstream st;
	st<<b[1];
	int y;
	st>>y;
	int ch=1;
	int g=a[0];
	int j=b[0];
	int in=1;
	int count=0;
	int a1,a2,b1,b2;
	a1=g;a2=j;b1=x;b2=y;
	for(int i=0;;i++)
	{
		
		if(j>g)
		{
			
			g=g+1;
		}
		else if(j<g)
		{
			
			g=g-1;
		}
		else if(g==j)
		{
			ch=0;
		}
		if(y>x)
		{
			
			x=x+1;
		}
		else if(y<x)
		{
			
			x=x-1;
		}
		else if(x==y)
		{
			in=0;
		}
		
		if(ch==0&&in==0)
		{
			break;
		}
		count=count+1;
		
	}
	cout<<count<<endl;
	int iu=1;
	int hu=1;
	for(int i=0;;i++)
	{
		
		if(a2>a1)
		{
			cout<<"R";
			a1=a1+1;
		}
		else if(a2<a1)
		{
			cout<<"L";
			a1=a1-1;
		}
		else if(a1==a2)
		{
			hu=0;
		}
		if(b2>b1)
		{
			cout<<"U";
			b1=b1+1;
		}
		else if(b2<b1)
		{
			cout<<"D";
			b1=b1-1;
		}
		else if(b1==b2)
		{
			iu=0;
		}
		if(hu==0&&iu==0)
		{
			break;
		}
		cout<<endl;
	}
	return 0;
}
