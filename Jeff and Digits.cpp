#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[n];
	int a=0;
	int b=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i]==0)
		{
			a=a+1;
		}
		else if(s[i]==5)
		{
			b=b+1;
		}
	}
	if(a==0)
	{
		cout<<-1<<endl;
	}
else if(b<9&&a>0)
	{
		cout<<0<<endl;
	}
	
	else {
		int d=b/9;
		for(int i=0;(i<d*9);i++)
		{
			cout<<5;
		}
		for(int i=0;i<a;i++)
		{
			cout<<0;
		}
	}
	return 0;
}
