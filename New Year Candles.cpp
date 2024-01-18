#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int count=a;
	while(1>0)
	{
		int z=a/b;
		int d=a%b;
		count=count+z;
		a=z+d;
		if(a<b)
		{
			break;
		}
	}
	cout<<count<<endl;
}
