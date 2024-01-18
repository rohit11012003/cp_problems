#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
 long long int n,k;
	cin>>n>>k;
	long long int count=1;
	for(int i=1;i<=k;i++)
	{
		count=(count*n)%1000000007;
	}
	cout<<count<<endl;
	}
	return 0;
}
