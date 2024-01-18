#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	sort(A,A+n,greater<int>());
	long long count=0;
	for(int i=0;i<n/2;i++)
	{
		count=count+pow((A[i]+A[n-1-i]),2);
	}
	cout<<count<<endl;
	return 0;
	
}
