#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string h=s;
	string f=s.substr(1,6);
	cout<<f<<endl;
	s.empty();
	s=h;
	string r=s.substr(4,2);
	cout<<r<<endl;
	return 0;
}
