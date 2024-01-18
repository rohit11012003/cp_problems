#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c,m;
		cin>>a>>b>>c>>m;
		int z=max(a,b);
	z=max(z,c);
	if((z-m-1)>(b+c)||(2*m)>((a/2)+(b/2)+(c/2)))
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
		
	}
	return 0;
}
