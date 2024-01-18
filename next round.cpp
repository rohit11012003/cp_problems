#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		
	}
	int z=A[k-1];
	for(int i=0;i<n;i++)
	{
		if(A[i]>=z)
		{
			count=count+1;
		}
	}
	cout<<count;
	return 0;
}
