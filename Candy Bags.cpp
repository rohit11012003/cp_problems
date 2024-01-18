#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int t;
	t=n;
	n=n*n;
	for(int i=1;i<=n/2;)
	{
		for(int j=0;j<t/2;j++)
		{
				cout<<i<<" "<<n+1-i<<" ";
				i++;
		}
		cout<<endl;
	
	}
	return 0;
}
