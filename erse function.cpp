#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0'&&s[i+1]=='1')
		{
			s.erase(s.begin()+i);
		}
	}
	cout<<s;
	return 0;
}
