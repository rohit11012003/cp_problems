#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int j=0;
	for(int i=0;i<s.size()/2;i++)
	{
		int a=s[i];
		int b=s[n-1-i];
		if(a!=b)
		{
			j=1;
			cout<<s[i]<<endl;
			cout<<s[n-i-1]<<endl;
		}
	}
	cout<<j;
	return 0;
}
