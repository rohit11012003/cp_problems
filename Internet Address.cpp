#include<bits/stdc++.h>
using namespace std;
int  main()
{
	string s;
	cin>>s;
	string g;
	if(s[0]=='h')
	{
		string d="http://";
		g=g+d;
		int t;
		for(int i=4;;i++)
		{
			if(s[i]=='r'&&s[i+1]=='u'&&i!=4)
			{
				t=i;
				break;
			}
			else {
				
				g=g+s[i];
			}
		}
		string p=".ru";
		g=g+p;
		if(t+1!=s.size()-1)
		{
			g=g+'/';
			for(int i=t+2;i<s.size();i++)
			{
				
				g=g+s[i];
			}
		}
	}
	else if(s[0]=='f')
	{
		string d="ftp://";
		g=g+d;
			int t;
		for(int i=3;;i++)
		{
			if(s[i]=='r'&&s[i+1]=='u'&&i!=3)
			{
				t=i;
				break;
			}
			else {
				
				g=g+s[i];
			}
		}
		string p=".ru";
		g=g+p;
		if(t+1!=s.size()-1)
		{
			g=g+'/';
			for(int i=t+2;i<s.size();i++)
			{
				
				g=g+s[i];
			}
		}
	}
	cout<<g<<endl;
}
