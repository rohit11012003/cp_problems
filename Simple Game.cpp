#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	if(n==1)
	{
		cout<<1<<endl;
	}
	else{
	long long int a,b;
	a=m-1;
	b=n-m;
	if(a>b)
	{
		cout<<m-1<<endl;
	}
	else if(b>a)
	{
		cout<<m+1<<endl;
	}
	else if(a==b)
	{
		cout<<m-1<<endl;
	}
}
return 0;
}
