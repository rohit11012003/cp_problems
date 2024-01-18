#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string j;
	string h=" ";
	int y=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&y==1)
		{
			i=i+2;
			j=j+h;
		}
	else if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
			i=i+2;
		}
		else {
			y=1;
			j=j+s[i];
		}
		
	}
	for(int i=0;i<j.size();i++)
	{
		if(j[i]==' '&&j[i+1]==' ')
		{
			j.erase(j.begin()+i);
		}
	}
	cout<<j;
	return 0;
}
