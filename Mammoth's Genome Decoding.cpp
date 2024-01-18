#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0;
	int g=0;
	int c=0;
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
			a++;
		}
		else if(s[i]=='C')
		{
			c++;
		}
		else if(s[i]=='G')
		{
			g++;
		}
		else if(s[i]=='T')
		{
			t++;
		}
	}

	int d=(n/4);
	if(n%4!=0)
	{
		cout<<"==="<<endl;
		return 0;
	}
	else if(a>d||c>d||g>d||t>d)
	{
		cout<<"==="<<endl;
		return 0;
	}
else {
	for(int i=a;i<d;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]=='?')
			{
				s[j]='A';
				break;
			}
		}
	}
	for(int i=c;i<d;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]=='?')
			{
				s[j]='C';
				break;
			}
		}
	}
	for(int i=g;i<d;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]=='?')
			{
				s[j]='G';
				break;
			}
		}
	}
	for(int i=t;i<d;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j]=='?')
			{
				s[j]='T';
				break;
			}
		}
	}
	cout<<s<<endl;
}
return 0;
}
