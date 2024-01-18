#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int d=0;
	for(int i=0;i<s.size()-1;i++)
	{
	int b=abs(s[i+1]-s[i]);
	if(b>13){
			b=26-b;
			d=d+b;
		}
		else{
			d=d+b;
		}
	}
	int c=s[0]-97;
	if(c>13)
	{
		c=26-c;
	}
	cout<<c+d;
	
	return 0;

}
