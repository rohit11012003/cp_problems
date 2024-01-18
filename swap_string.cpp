#include<iostream>
using namespace std;
int main()
{
	string s="a,b,c,d,e";
	cout<<s[0]<<endl;
	swap(s[0],s[3]);
	cout<<s[0]<<endl;
	return 0;
}
