#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	unsigned long long int kmax;
	long long int z=n-(m-1);
	kmax=z*(z-1)/2;
	long long int a,b;
	a=n/m;
	b=n%m;
	unsigned long long int kmin;
	kmin=b*((a*(a+1))/2);
	kmin=kmin+(m-b)*(a*(a-1)/2);
	cout<<kmin<<" "<<kmax<<endl;
	return 0;
}
