#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int f[n];
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
		cin>>t[i];
	}
	int count;
	for(int i=0;i<n;i++)
	{
		int e=0;
		if(t[i]>k)
		{
			e=f[i]-(t[i]-k);
		}
		else{
			e=f[i];
		}
		if(i==0)
		{
			count=e;
		}
		else if(e>count)
		{
			count=e;
		}
	}
	cout<<count<<endl;
	return 0;
}
