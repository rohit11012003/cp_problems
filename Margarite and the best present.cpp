#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	for(int p=0;p<q;p++)
	{
		long long int l,r;
		cin>>l>>r;
		long long int a,b;
		a=r/2;
		b=r-a;
		long long d,e;
		d=(l-1)/2;
		e=l-1-d;
		cout<<((a*(a+1))-(d*(d+1)))-((b*b)-(e*e))<<endl;
	}
	return 0;
}
