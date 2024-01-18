#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(i!=0&&a[i]==0&&a[i+1]==1&&a[i-1]==1)
		{
			count++;
		}
		else if(a[i]==1)
		{
			count++;
		}
		
	}
	if(a[n-1]==1)
	{
		count++;
	}
	cout<<count<<endl;
	return 0;
}
