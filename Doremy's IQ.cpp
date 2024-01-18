#include<bits/stdc++.h>
using namespace std;
int fun(long long int a[], int ind , long long int iq,int n)
{
	if(iq==0)
	{
		return 0;
	}
	if(ind==n-1)
	{
		return 1;
	}
	else{
		if(iq>=a[ind])
		{
			return fun(a, ind+1,iq,n)+1;
		}
		else {
			return max(fun(a,ind+1, iq-1,n)+1,fun(a,ind+1,iq,n));
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,iq;
		cin>>n>>iq;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<fun(a,0,iq,n)<<endl;
	}
}
