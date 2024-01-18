#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	if(n==m)
	{
		cout<<n-1<<" "<<m<<endl;
	}
	else {
		long long int diff=abs(n-m);
		long long int mi=min(n,m);
		cout<<mi-1+diff<<" "<<mi<<endl;
	}
	return 0;
}
