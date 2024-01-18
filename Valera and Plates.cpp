#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		
		if(a[i]==1)
		{
			if(m==0)
			{
				count=count+1;
			}
			else{
				m=m-1;
			}
		}
		else if(a[i]==2)
		{
			if(m==0&&k==0)
			{
				count=count+1;
			}
			else if(m==0&&k!=0)
			{
				k=k-1;
			}
			else if(k==0&&m!=0)
			{
				m=m-1;
			}
			else if(m!=0&&k!=0)
			{
				k=k-1;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
