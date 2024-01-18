#include<bits/stdc++.h> 
using namespace std;
int main()
{
	unsigned long long int n;
	cin>>n;
	unsigned long long int count=1;
	count=count*n;
	count=count*(n-1);
	count=count*(n-2);
	count=count*(n-3);
	count=count*(n-4);
	cout<<count<<endl;
	return 0;
	
}
