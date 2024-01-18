#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	for(int l=0;l<t;l++)
	{
	long long int n,k;
	cin>>n>>k;
	long long int count=0;
	while(n!=0)
	{
		if(n%k==0)
		{
			n=n/k;
			count=count+1;
		}
		else {
			long long int j;
			j=n%k;
			n=n-j;
			count=count+j;
		}
	}
	cout<<count<<endl;
	}
	
	return 0;
}
