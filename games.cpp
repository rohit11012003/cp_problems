#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	int B[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		cin>>B[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[i]==B[j])
			{
				count=count+1;
			}
		}
	}
	cout<<count;
	return 0;
}
