#include<iostream>
using namespace std;
int  number(int a,int H,int b)
{
	int x=0;
	
	while(H>0)
	{
	
	if(x%2==0)
	{
		H=H-a;
		x=x+1;
	}
	else
	{
		H=H-b;
		x=x+1;
	}
		
		
	}
	return x;

}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,H;
		cin>>n>>H;
		int A[n];
		for(int j=0;j<n;j++)
		{
			cin>>A[j];
		}
		for(int j=0;j<n;j++)
		{
			for(int z=j+1;z<n;z++)
			{
				if(A[j]>A[z])
				{
					swap(A[z],A[j]);
				}
			}
		}
		int a=A[n-1];
		int b=A[n-2];
	
		cout<<number(a,H,b)<<endl;
	}
	return 0;
}
