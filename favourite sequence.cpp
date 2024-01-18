#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		int b[n];
		int y=0;
		int z=n-1;
		for(int i=0;i<n;i++)
		{
			if(i%2==0){
				b[i]=A[y];
				y=y+1;
			}
			else  {
				b[i]=A[z];
				z=z-1;
			}
		
		}
		
		for(int l=0;l<n;l++)
		{
			cout<<b[l]<<" ";
		}
	}
	return 0;
}
