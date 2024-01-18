#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int q=0;
	int w=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			q=q+1;
		}
		else if(s[i]>=97&&s[i]<=122)
		{
			w=w+1;
		}
	}
	if(q>w)
	{
		for(int i=0;i<s.size();i++)
		{
			s[i]=toupper(s[i]);
		}
	}
	else if(q<=w)
	{
		for(int i=0;i<s.size();i++)
		{
			s[i]=tolower(s[i]);
		}
	}
	cout<<s;
	return 0;
	
}
