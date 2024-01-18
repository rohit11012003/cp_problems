#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,s1,s2,e1,e2;
	cin>>t>>s1>>s2>>e1>>e2;
	long long int a=e1-s1;
	long long int b=e2-s2;
	char x,y;
	if(a<0)
	{
		x='W';
	}
	else if(a>0)
	{
		x='E';
	}
	if(b<0)
	{
		y='S';
	}
	else if(b>0)
	{
		y='N';
	}
	if(a==0&&b==0)
	{
		cout<<0<<endl;
		return 0;
	}
	a=abs(a);
	b=abs(b);
	long long int u=-1;
	
	for(int i=0;i<t;i++)
	{
		char d;
		cin>>d;
		if(d==x)
		{
			a--;
		}
		else if(d==y)
		{
			b--;
		}
		if(a<=0&&b<=0)
		
		{
		u=i;
		break;	
		}
	}
	
	 if(u==-1)
	{
		cout<<-1<<endl;
	}
	else if(u+1>t)
	{
		cout<<-1<<endl;
	}
	else {
		cout<<u+1<<endl;
	}
	
	
}
