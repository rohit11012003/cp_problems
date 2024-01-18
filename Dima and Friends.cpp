#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		sum=sum+s[i];
	}
	int count=0;
	int t=sum;
	for(int i=1;i<=5;i++)
	{
		sum=t;
		sum=sum+i;
		if((sum-1)%(n+1)==0)
		{
			count=count;
		}
		else{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
