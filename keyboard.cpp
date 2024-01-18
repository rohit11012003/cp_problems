#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a= "qwertyuiop";
	string b= "asdfghjkl;";
	string c="zxcvbnm,./";
	char e;
	cin>>e;
	string s;
	cin>>s;
	if(e=='R'){
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(s[i]==a[j])
			{
				s[i]=a[j-1];
			}
		}
		for(int j=0;j<b.size();j++)
		{
			if(s[i]==b[j])
			{
				s[i]=b[j-1];
			}
		}
		for(int j=0;j<c.size();j++)
		{
			if(s[i]==c[j])
			{
				s[i]=c[j-1];
			}
		}
	}
	}
	else if (e=='L'){
		for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			if(s[i]==a[j])
			{
				s[i]=a[j+1];
				break;
			}
		}
		for(int j=0;j<b.size();j++)
		{
			if(s[i]==b[j])
			{
				s[i]=b[j+1];
				break;
			}
		}
		for(int j=0;j<c.size();j++)
		{
			if(s[i]==c[j])
			{
				s[i]=c[j+1];
				break;
			}
		}
	}
	
	}
		
	
	cout<<s<<endl;
	return 0;
}
