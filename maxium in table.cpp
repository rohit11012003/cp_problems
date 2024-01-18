#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0||j==0)
			{
				A[i][j]=1;
			}
			else{
				A[i][j]=A[i-1][j]+A[i][j-1];
			}
		}
	}
	cout<<A[n-1][n-1];
	
}
