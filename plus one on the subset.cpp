#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
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
		
		cout<<A[0]-A[n-1]<<endl;
	}
}
