#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int h,l;
	cin>>h>>l;
	double x;
	x=(pow(l,2)-pow(h,2))/(2*h);
	cout<<fixed<<setprecision(13)<<x<<endl;
	return 0;
}
