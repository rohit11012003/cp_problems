#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n;
	n=(2*n)-1;
	int A[n][n];
	int t=n;
	int k=0;
	while(t>=1)
	{
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==k||i==(n-1-k)||j==k||j==(n-1-k))
			{
				A[i][j]=t;
			}
		}
	}
	t=t-1;
	k=k+1;
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		A[i][j]=m-A[i][j]+1;
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<A[i][j];
	}
	cout<<endl;
}
return 0;
}
