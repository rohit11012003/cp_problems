#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int z=a.size();
	int c[z];
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==b[i])
		{
			c[i]=0;
		}
		else if(a[i]!=b[i])
		{
			c[i]=1;
		}
	}
	for(int i=0;i<z;i++)
	{
		cout<<c[i];
	}
	return 0;
}
