#include<iostream>
#include<cmath>
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
	int x=0;
	int y=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]>B[i])
		{
			x=x+1;
		}
		else if (A[i]<B[i])
		{
			y=y+1;
		}
	}
	if(x>y)
	{
		cout<<"Mishka";
	}
	else if(y>x)
	{
		cout<<"Chris";
	}
	else {
		cout<<"Friendship is magic!^^";
	}
	return 0;
}
