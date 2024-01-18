#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,k,d;
	cin>>n>>t>>k>>d;
	int g=d/t;
	
	int b=(g*k)+k;
	
	n=n-b;
	if(n>0)
	{
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}
