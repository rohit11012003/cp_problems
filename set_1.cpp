#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<string> s;
	for(int i=0;i<n;i++)
	{
		string s1;
		cin>>s1;
		s.insert(s1);
	}
	for(auto va : s)
	{
		cout<<va<<endl;
	}
	return 0;
}
