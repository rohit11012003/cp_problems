#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int sum=0;
		while(n!=0)
		{
			if(n%2==0)
			{
				sum=sum+n/2;
				n=n/2;
			}
			else{
				sum=sum+1;
				n=n-1;
			}
			if(n==0)
			
			{
				break;
			}
			if(n%2==0)
			{
				n=n/2;
			}
			else{
				n=n-1;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
