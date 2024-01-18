#include<iostream>
using namespace std;
int main()
{
	int n; long int d;
	cin>>n>>d;
	int A[n];
long	int k=0;
	long int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]>8)
		{
		k=k+A[i]-8;
			count=count+8;
		}
		else if(A[i]+k>=8)
			{
				k=k-(8-A[i]);
				count=count+8;
			}
			else if(A[i]+k<8){
			
				count=count+A[i]+k;
				k=0;}
			
			
		
		if(count>=d)
		{
			cout<<i+1;
			return 0;
		}
		
	}
	cout<<-1;
	return 0;
}
