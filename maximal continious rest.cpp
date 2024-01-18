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
	int a=0;
	int b=0;
	int count =0;
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]==1)
		{
			j=j+1;
		}
		if(j>count)
		{
			count=j;
		}
		if(A[i]==0)
		{
			j=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]==1)
		{
			a=a+1;
		}
		else if(A[i]==0)
		{
			break;
		}}
		for(int i=0;i<n;i++)
		{
			if(A[n-1-i]==1)
			{
				b=b+1;
			}
			else {
				break;
			}
		}
		cout<<max(count,(a+b));
		return 0;
	
}
