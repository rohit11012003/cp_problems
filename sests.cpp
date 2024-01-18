#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<string> s;
	s.insert("asd");
	s.insert("asd");
	s.insert("sdf");
	s.insert("ghj");

	for(string val: s)
	{
		cout<<val<<endl;
	}
	s.insert("asdfg");
	s.insert("asd");
	for(auto it=s.begin();it!=s.end();++it)
	{
		cout<<*(it)<<endl;
	}
	return 0;
	
}
