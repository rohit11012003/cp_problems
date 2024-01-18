#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int n;
	cin>>n;
long long int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	if(n<=2)
	{
		cout<<0<<endl;
	}
	else {
		sort(A,A+n);
	long long	int a=0;
	long long	int b=0;
	long long	int i=1;
		while(A[i]==A[0]){
			a=a+1;
			if(i==(n-1))
			{
				break;
			}
			i++;
		}
	long long 	int j=(n-2);
		while(A[j]==A[n-1])
		{
			b=b+1;
			if(j==0)
			{
				break;
			}
			j=j-1;
		}
		if(a+b>n)
		{
			cout<<0<<endl;
		}
		else {
			cout<<n-(a+b)-2<<endl;
		}
	}
	return 0;
}
