#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int u=a+b;
		int y=c+d;
		cout<<min(u,y)<<endl;
	}
	return 0;
}
