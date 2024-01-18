#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m>(n/2))
	{
		cout<<n-m;
	}
	else if(m==0)
	{
		cout<<1<<endl;
	}
	else {
		cout<<m;
	}
	return 0;
}
