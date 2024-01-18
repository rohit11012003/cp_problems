#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	 int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		sum=sum+A[i];
	}
	cout<<sum<<endl;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((sum-A[i])%2==0)
		{
			count=count+1;
		}
	}
	cout<<count<<endl;
	return 0;
	
}
