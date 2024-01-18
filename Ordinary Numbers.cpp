#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int g;
		cin>>g;
		stringstream str;
		str<<g;
		string s;
		str>>s;
		int count=0;
		count=9*(s.size()-1);
		count=count-1+(g/(pow(10,s.size()-1)));
		for(int j=0;j<s.size();j++)
		{
			s[j]=s[0];
		}
		stringstream st;
		st<<s;
		int gh;
		st>>gh;
		if(g>=gh)
		{
			count=count+1;
		}
		cout<<count<<endl;
	
	}
	return 0;
}
