#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int A[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>A[i][j];
		}
	}
	int x,y;
	int z;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(A[i][j]==1)
			{
				x=i+1;
				y=j+1;
			}
		}
	}
	z=(abs(x-3)+abs(y-3));
	cout<<z;
	return 0;
}
