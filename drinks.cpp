#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	double sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		sum=sum+A[i];
	}
	double s=sum/n;
	cout<<s;
	return 0;
	
}
