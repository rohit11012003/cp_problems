#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int a[m];
	for(int i=0;i<m;i++)
	{
		
		cin>>a[i];
	}
	
	long long int count=0;
	for(int i=-1;i<m-1;i++)
	{
		long long int z=0;
		if(i==-1)
		{
			z=a[0]-1;
		}
		else if(a[i+1]<a[i])
		{
			z=(n-a[i])+a[i+1];
		}
		else {
			z=a[i+1]-a[i];
		}
		count=count+z;
	}
	cout<<count<<endl;
	return 0;
}
