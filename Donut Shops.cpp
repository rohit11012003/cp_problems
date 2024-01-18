#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		if(c<=a)
		{
			cout<<-1<<" ";
		}
		else {
			cout<<1<<" ";
		}
		if(a*b<=c)
		{
			cout<<-1<<endl;
		}
		else {
			cout<<b<<endl;
		}
	}
	return 0;
}
