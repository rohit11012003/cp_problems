#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	if(k==n||k==1)
	{
		cout<<(3*n)<<endl;
	}
	else {
		if(k<=n/2)
		{
			cout<<(k*3)+(k+1)+((n-k)*3)<<endl;
		}
		else{
		
		cout<<((n-k+1)*3)+(n-k+2)+((k-1)*3)<<endl;
	}}
	return 0;
}
