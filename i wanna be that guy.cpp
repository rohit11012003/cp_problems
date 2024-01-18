#include<iostream>
using namespace std;
int main()
{
	int z;
	cin>>z;
	int x;
	cin>>x;
	int A[x];
	for(int i=0;i<x;i++)
	{
		cin>>A[i];
	}
	int y;
	cin>>y;
	int B[y];
	for(int i=0;i<y;i++)
	{
		cin>>B[i];
	}
	int k=1;
	int d=0;
	while(k<=z)
	{
		d=0;
		for(int i=0;i<x;i++)
		{
			if(k==A[i])
			{
				d=1;
			}
		}
		for(int i=0;i<y;i++)
		{
			if(k==B[i])
			{
				d=1;
			}
		}
		if(d==0)
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
		k=k+1;
	}
	cout<<"I become the guy.";
	return 0;
}
