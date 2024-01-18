#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
	int n;
	cin>>n;
	a[1]=1;
	for(int i=2;i<1000000;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[n]<<endl;
	
}
