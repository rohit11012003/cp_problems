#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		count =count+A[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]>A[i])
			{
				swap(A[i],A[j]);
			}
		}
	}
	int d=count/2;
	int m=0;
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(m>d)
		{
			break;
		}
		m=m+A[i];
		t=t+1;
	}
	cout<<t;
}
