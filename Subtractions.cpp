#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long int a;
		long long int b;
		cin>>a>>b;
		long long int c=max(a,b);
		long long int d=min(a,b);
		long long int count=0;
		if(c==d)
		{
			cout<<1<<endl;
		}
		else {
			while(d!=0)
			{
			count=count+(c/d);
			int z=d;
			d=c%d;
			c=z;}
			cout<<count<<endl;
		}
	}
}
