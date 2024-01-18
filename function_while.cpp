#include<iostream>
using namespace std;
int count(int x)
{
	int k=0;
	while(1>0)
	{
		if(x>k)
		{
			k++;
			
		}
		if(x<=k)
		{
			return k;
		}
		
	}
}
int main()
{
	int k;
	cin>>k;
	cout<<count(k);
	int n;
	cin>>n;
	int A[n];
	cout<<my_sizeof(A);
	return 0;
}
