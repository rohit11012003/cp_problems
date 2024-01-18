#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int v[N];
int  fun(int a[], int ind)
{
	if(a[ind]==0)
	{
		return v[ind]=1;
	}
	if(v[ind]!=-1)
	{
		return v[ind];
	}
	else{
		return v[ind]=fun(a,a[ind]-1)+1;
	}
}

int main()
{
	memset(v,-1,sizeof(v));
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		int z=fun(a,i);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;
}
