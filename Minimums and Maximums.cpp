#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		int a=0;
		int b=0;
		if(l2>=l1&&l2<=r1)
		{
			a=1;
		}
		else if(l1>=l2&&l1<=r2)
		{
			b=1;
		}
		if(a==1&&b==1)
		{
			cout<<min(l1,l2)<<endl;
		}
		else if(a==1)
		{
			cout<<l2<<endl;
		}
		else if(b==1)
		{
			cout<<l1<<endl;
		}
		else {
			cout<<l1+l2<<endl;
		}
	}
	return 0;
}
