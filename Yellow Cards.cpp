#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,k1,k2,n;
	cin>>a1>>a2>>k1>>k2>>n;
	int min=(k1-1)*a1+(k2-1)*a2;
	min=n-min;
	if(min<0)
	{
		cout<<0<<" ";
	}
	else if(min>(a1+a2))
	{
		cout<<a1+a2<<" ";
	}
	else {
		cout<<min<<" ";
	}
	int count=0;
	if(k1<k2)
	{
		if(a1*k1<n)
		{
			n=n-(a1*k1);
		}
			else {
			cout<<n/k1<<endl;
			return 0;
		}
		if(a2*k2<n)
		{
			cout<<a1+a2<<endl;
			return 0;
		}
		else {
			cout<<a1+(n/k2)<<endl;
		}
		
	}
	else{
		
		if(a2*k2<n)
		{
			n=n-(a2*k2);
		}
			else {
			cout<<n/k2<<endl;
			return 0;
		}
		if(a1*k1<n)
		{
			cout<<a1+a2<<endl;
			return 0;
		}
		else {
			cout<<a2+(n/k1)<<endl;
		}
		
	
	}
	return 0;
}
