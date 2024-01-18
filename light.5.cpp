#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		string A[2*n];
		for(int j=0;j<n;j++)
		{
			A[j]="(";
		}
		for(int j=n;j<2*n;j++)
		{
			A[j]=")";
		}
		for(int j=0;j<n;j++)
		{
			for(int x=0;x<2*n;x++)
		{
			cout<<A[x];
		}
		swap(A[j], A[(2*n)-j-1]);
		cout<<endl;
		}
		
		
		
		
	}
	return 0;
}
