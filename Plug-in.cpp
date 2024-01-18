#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		int t=0;
	if(s[i]==s[i+1])
	{
		s.erase(s.begin()+i);
		s.erase(s.begin()+i);
		t=1;
	}
	if(t==1)
	{
		i=i-2;
	}
	if(i==-2)
	{
		i=-1;
	}
	}
	cout<<s<<endl;
	return 0;
}
