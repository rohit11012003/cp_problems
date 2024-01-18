#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int d=0;
	int e=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		d=0;
		for(int j=0;j<n;j++)
		{
			e=abs(A[i]-A[j]);
			if(e%2==0)
			{
				d=d+0;
			}
			else{
				d=d+1;
			}
		}
		if(i==0)
		{
			count=d;
		}
		else if(d<count)
		{
			count=d;
		}
	}
	cout<<count<<endl;
	return 0;
}
