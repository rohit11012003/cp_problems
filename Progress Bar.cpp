#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,t;
	cin>>n>>k>>t;
	long long int z=t*n*k;
 z=z/100;
	long long int y=z/k;
	long long int x=z%k;
	for(int i=0;i<y;i++)
	{
		cout<<k<<" ";
	 } 
	 if(y!=n)
	 {
	 
	 cout<<x<<" ";
	 for(int i=0;i<n-(y+1);i++)
	 {
	 	cout<<0<<" ";
	 }}
	 cout<<endl;
	 return 0;
}
