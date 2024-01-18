#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	long long int t;
	int b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>500000&&b==0)
		{
			t=i;
			b=1;
		}
		
	}
	if(b==0)
	{
		cout<<a[n-1]-1<<endl;
	}
	else {
		if(t==0)
		{
		cout<<1000000-a[t]<<endl;	
		}
		else {
		
		cout<<max(a[t-1]-1,1000000-a[t])<<endl;
	}}
	return 0;
}
