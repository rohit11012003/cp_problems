#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int n,m,k;
	cin>>n>>m>>k;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];}
		int t=0;
long long int sum=0;
	sort(a,a+n,greater<int>());
	if(m%(k+1)==0)
	{
		sum=((m/(k+1))*((k*a[0])+(a[1])));
		cout<<sum<<endl;
	}
	else {
		sum=(m/(k+1)*((k*a[0])+(a[1])));
		sum=sum+((m%(k+1))*a[0]);
		cout<<sum<<endl;
	}
	
	return 0;
}
