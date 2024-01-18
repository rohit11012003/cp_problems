#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0;
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='x')
		{
			a++;
		}
		else if(s[i]=='X')
		{
			b++;
		}
	}
	if(a==b)
	{
		cout<<0<<endl;
		cout<<s<<endl;
	}
	int g=0;
	 if(a>b)
	{
		cout<<((n/2)-b)<<endl;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='x')
			{
				s[i]='X';
				g++;
			}
			if(g==(n/2)-b)
			{
				cout<<s<<endl;
				break;
			}
		}
	}
	
	else if(b>a)
	{
		cout<<((n/2)-a)<<endl;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='X')
			{
				s[i]='x';
				g++;
			}
			if(g==(n/2)-a)
			{
				cout<<s<<endl;
				break;
			}
		}
	}
	return 0;
}
