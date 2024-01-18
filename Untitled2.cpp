#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	int t=123456789;
	for(int i=0;i<n;i++)
	{
		count=count+a[n-1-i];
		if(count<0)
		{
			t=n-1-i;
		}
	}
	cout<<t<<endl;
	return 0;
}
