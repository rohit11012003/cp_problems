#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v,v+n,greater<long long int>());
	long long int a,b,c;
	a=v[0];
	b=v[1];
	c=v[2];
	for(int i=3;i<n;i++)
	{
		
		
		c=c+v[i];
		if(c>b)
		{
			swap(b,c);
		}
		if(b>a)
		{
			swap(a,b);
		}
		}
	cout<<a+1-(b+c)<<endl;	
	}
	

