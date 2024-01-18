#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int z=n/4;
	long long int p=n%4;
	for(int i=0;i<z;i++)
	{
		cout<<"abcd";
	}
	string s="abcd";
	for(int j=0;j<p;j++)
	{
		cout<<s[j];
	}
	return 0;
}
