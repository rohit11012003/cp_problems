#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
long long	int a;
long long	int l=0;
long long 	int r=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='^')
		{
			a=i;
			break;
		}
	}
	for(int i=0;i<=a-1;i++)
	{
		if(s[i]!='=')
		{
			stringstream str;
			str<<s[i];
		long long 	int c;
			str>>c;
			l=l+((a-i)*c);
		}
	}
	for(int i=a+1;i<s.size();i++)
	{
		if(s[i]!='=')
		{
			stringstream str;
			str<<s[i];
		long long 	int c;
			str>>c;
			r=r+((i-a)*c);
		}
	}
	if(l>r)
	{
		cout<<"left"<<endl;
	}
	else if(r>l)
	{
		cout<<"right"<<endl;
	}
	else if(l==r)
	{
		cout<<"balance"<<endl;
	}
	return 0;
}
