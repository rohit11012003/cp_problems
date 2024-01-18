#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int h,m;
		cin>>h>>m;
		h=23-h;
		m=60-m;
		cout<<(h*60)+m<<endl;
	}
	return 0;
}
