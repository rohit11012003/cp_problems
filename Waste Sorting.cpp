#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int l=0;l<n;l++)
	{
		int c1,c2,c3;
		cin>>c1>>c2>>c3;
		int a1,a2,a3,a4,a5;
		cin>>a1>>a2>>a3>>a4>>a5;
		int d=a4-(c1-a1);
		if(d<0)
		{
			d=0;
		}
		int e=a5-(c2-a2);
		if(e<0)
		{
			e=0;
		}
		if(a1>c1||a2>c2||a3>c3)
		{
			cout<<"NO"<<endl;
		}
	else if(e+d>(c3-a3))
		{
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
