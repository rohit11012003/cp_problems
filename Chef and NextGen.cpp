#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a*b)<=(c*d))
		{
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
