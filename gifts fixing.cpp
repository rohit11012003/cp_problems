#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		int n;
		cin>>n;
		int A[n];
		int B[n];
		int j=0;
		int k=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			if(i==0)
			{
				j=A[i];
			}
			else {
				if(A[i]<A[i-1])
				{
					j=A[i];
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cin>>B[i];
			if(i==0)
			{
				k=B[i];
			}
			else {
				if(B[i]<B[i-1])
				{
					k=B[i];
				}
			}
		}
	long long	int count=0;
		for(int i=0;i<n;i++)
		{
			int g,v;
			g=A[i]-j;
			v=B[i]-k;
			long long y=max(g,v);
			count=count+y;
		}
		cout<< count<<endl;
	}
}
