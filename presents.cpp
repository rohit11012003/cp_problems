#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n];
	int k=1;
	int u=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(A[j]==k)
			{
				B[u]=j+1;
				u=u+1;
				k=k+1;
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<B[i]<<" ";
	}
	return 0;
}
