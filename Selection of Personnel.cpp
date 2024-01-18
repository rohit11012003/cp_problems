#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
unsigned	long long int x=1;
	int j=n;
	for(int i=0;i<5;i++)
	{
		x=x*j;
		j--;
	}
	x=x/120;
	unsigned long long int y;
	y=x*(n-5)/6;
	unsigned long long int z;
	z=y*(n-6)/7;
//	cout<<x<<" "<<y<<" "<<z<<endl;
	cout<<x+y+z<<endl;
	return 0;
}
