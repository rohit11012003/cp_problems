#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
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
	for(int i=0;i<n;i++)
	{
		if(k%A[i]==0)
		{
			cout<<k/A[i]<<endl;
			break;
		}
	}
	return 0;
}
