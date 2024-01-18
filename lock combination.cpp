#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	stringstream w,e;
	string f,g;
	cin>>f>>g;
	w<<f;
	e<<g;
	int a,b;
	w>>a;
	e>>b;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int u;
		int y;
		int j=n-1-i;
		u=a/pow(10,j);
		a=a-(u*(pow(10,j)));
		y=b/pow(10,j);
		b=b-(y*(pow(10,j)));
		int h=abs(u-y);
		if(h>=5)
		{
			h=10-h;
			count =count +h;
		}
		else{
		
		count=count+h;
		}
	}
	cout<<count<<endl;
	return 0;
}
