#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(s=="X++"||s=="++X")
		{
			count =count +1;
		}
		else if(s=="--X"||s=="X--")
		{
			count =count-1;
		}
		
	}
	cout<<count;
	return 0;
}
