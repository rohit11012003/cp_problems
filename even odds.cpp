#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count=1;
	int A[n];
	if(n%2==0)
	{
		int d=n/2;
		for(int i=0;i<d;i++)
		{
			A[i]=count;
			count=count+1;
			A[d+i]=count;
			count=count+1;
		}
		cout<<A[k-1];
	}
	else{
		{
		int d=n/2;
		for(int i=0;i<d+1;i++)
		{
			A[i]=count;
			count=count+1;
			if(i==d)
			{
				break;
			}
			A[d+i+1]=count;
			count=count+1;
		}
	cout<<A[k-1];
	
	}
	}
	
	return 0;
}
