#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m<=n)
	{
		cout<<n-m<<endl;
	}
	else{
		int z=0;
		
		while(m>n)
		{
			z++;
			n=n*2;
		}
		z=z+n-m;
		cout<<z<<endl;
	}
	return 0;
}
