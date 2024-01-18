#include<bits/stdc++.h>
using namespace std;
//int N=1e5;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int v[n+1];
	for(int i=0;i<=n;i++)
	{
		v[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v[b]=1;
	}
	int z;
	for(int i=1;i<=n;i++)
	{
		if(v[i]==0)
		{
			z=i;
			break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=z)
		{
			cout<<i<<" "<<z<<endl;
		}
	}}
	return 0;
}
