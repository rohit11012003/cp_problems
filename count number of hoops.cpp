#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];

void fun(int ind)
{
	int p=0;
	if(ind-1>=0)
	{
		p=p+a[ind-1];
	}
	if(ind-2>=0)
	{
		p=p+a[ind-2];
	}
	if(ind-3>=0)
	{
		p=p+a[ind-3];
	}
	a[ind]=p;
}
int main()
{
	int n;
	cin>>n;
	a[0]=1;
	for(int i=1;i<=n;i++)
	{
		fun(i);
	}
	cout<<a[n]<<endl;
}
