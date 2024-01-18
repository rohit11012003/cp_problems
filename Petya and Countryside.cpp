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
	for(int i=0;i<n;i++)
	{
		int l=0;
		int r=0;
		for(int j=i;j>0;j--)
		{
			if(a[j]>=a[j-1])
			{
				l++;
			}
			else {
				break;
			}
		}
		for(int j=i;j<n-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				r++;
			}
			else{
				break;
			}
		}
		if(i==0)
		{
			count=l+r;
			if(count+1==n)
			{
				cout<<count+1;
				return 0;
			}
		}
		else if(l+r>count)
		{
			count=l+r;
			if(count+1==n)
			{
				cout<<count+1;
				return 0;
			}
		}
	}
	cout<<count+1<<endl;
	return 0;
}
