#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=0;i<n;i++)
	
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2)
		{
			count=count+1;
		}
		else
		{
			count=count;
		}
	}
	cout<<count;
	return 0;
}
