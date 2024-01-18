#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int k;
		cin>>k;
		ostringstream str1;
		str1<<k;
		string s=str1.str();
		cout<<s<<endl;
		
	}
	return 0;
}
