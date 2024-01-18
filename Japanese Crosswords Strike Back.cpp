#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x;
	cin>>n>>x;
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	if(sum+(n-1)==x)
	{
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
	
}
