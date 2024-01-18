#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		unsigned long long int n,k;
		cin>>n>>k;
		n=n-1;
		if(k*(k+1)/2<n)
		{
			n=n-(k*(k+1)/2);
			if(n%k==0)
			{
				cout<<k+(n/k)<<endl;
			}
			else {
				cout<<k+1+(n/k)<<endl;
			}
		}
		else if(k*(k+1)/2==n)
		{
			cout<<k<<endl;
		}
		else {
		unsigned long long t=(pow(((8*n)+1),0.5)-1)/2;
		if(t*(t+1)/2==n)
		{
			cout<<t<<endl;
		}
		else {
			cout<<t+1<<endl;
		}
	}
}
}
