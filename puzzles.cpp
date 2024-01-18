#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[m];
	int k=0;
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<m-1;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(A[j]>A[i])
			{
				swap(A[i],A[j]);
			}
		}
	}
	cout<<"hello"<<endl;
	for(int i=0;i<m;i++)
	{
		if(i==0)
		{
			k=A[i]-A[i+n-1];
		}
	else{
		int j;
		j=A[i]-A[i+n-1];
		if(j<k)
		{
			k=j;
		}
		}
		if((i+n-1)==(m-1))
		{
			cout<<k;
			return 0;
		}
		
	}
	
}

