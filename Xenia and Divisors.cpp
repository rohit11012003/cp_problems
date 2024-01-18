#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b[n];
	int a1=0;
	int a2=0;
	int a3=0;
	int a4=0;
	int a5=0;
	int a6=0;
	int a7=0;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		if(b[i]==1)
		{
			a1++;
		}
		else if(b[i]==2)
		{
			a2++;
		}
			else if(b[i]==3)
		{
			a3++;
		}
			else if(b[i]==4)
		{
			a4++;
		}
			else if(b[i]==5)
		{
			a5++;
		}
			else if(b[i]==6)
		{
			a6++;
		}
			else if(b[i]==7)
		{
			a7++;
		}
	}
	if(a7>0||a5>0)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(a1!=(n/3))
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(a2+a3!=(n/3)||a4+a6!=(n/3))
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(a4>a2)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(a6>a2+a3)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(a3>a6)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if((a2-a4)!=(a6-a3))
	{
		cout<<-1<<endl;
		return 0;
	}
	else {
		for(int i=0;i<a4;i++)
		{
			cout<<1<<" "<<2<<" "<<4<<endl;
		}
		for(int i=0;i<a3;i++)
		{
			cout<<1<<" "<<3<<" "<<6<<endl;
		}
		for(int i=0;i<(a2-a4);i++)
		{
			cout<<1<<" "<<2<<" "<<6<<endl;
		}
	}
	return 0;
}
