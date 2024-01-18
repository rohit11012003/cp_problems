#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[n];
	int k;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<A[i]/m<<" ";
			k=A[i]%m;
		}
		else {
			if(A[i]<(m-k))
			{
				cout<<0<<" ";
				k=k+A[i];
			}
			else{
				A[i]=A[i]-(m-k);
				cout<<(A[i]/m)+1<<" ";
				k=A[i]%m;
			}
		}
	}
	return 0;
	
}
