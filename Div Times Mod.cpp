#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	for(long long int i=0;;i++)
	{
	if(i==0)
	{
		long long int a;
		if(n%(k-1)==0)
		{
			a=n/(k-1);
		}
		else{
			a=n/(k-1)+1;
		}
		i=a*k;
		cout<<i<<endl;
	}
	else if(((i/k)*(k-1))<n)
	{
		cout<<i<<endl;
		i=i+k;
	}
	
	else{
		if((i/k)*(i%k)==n)
		{
			cout<<i<<endl;
			break;
		}}
	}
	return 0;
}
