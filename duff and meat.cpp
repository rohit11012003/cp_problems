#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	int d=b[0];
	int count=0;
	for(int i=0;i<n;i++)
	{
		count=count+(d*a[i]);
		if(b[i+1]<d)
		{
			d=b[i+1];
		}
	}
	cout<<count<<endl;
	return 0;
}
