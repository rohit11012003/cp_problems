#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    string g;
	    cin>>g;
		int a,b;
		stringstream s;
		b=g.size();
		s<<g;
		int h;
		s>>h;
		a=h/pow(10,(b-1));
		if(b==1)
		{
			cout<<(10*(a-1))+1<<endl;
		}
	else if(b==2)
		{
			cout<<(10*(a-1))+3<<endl;
		}
		else if(b==3)
		{
			cout<<(10*(a-1))+6<<endl;
		}
		else if(b==4)
		{
			cout<<(10*(a-1))+10<<endl;
		}
	}
	return 0;
}
