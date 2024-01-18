#include<bits/stdc++.h>
using namespace std;
int main()

{
	cout<<"entre the numbers whose hcf you want to calculate"<<endl;
	long long int a,b;
	cin>>a>>b;
	long long int x=max(a,b);
	long long int y=min(a,b);
	long long int q=x/y;
	long long int r=x%y;
	while(r!=0)
	{
		x=y;
		y=r;
		q=x/y;
		r=x%y;
	}
	cout<<"HCF of the given two numbers is "<<":"<<y<<endl;
	return 0;
}
