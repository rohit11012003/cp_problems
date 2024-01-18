#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>1)
		{
			break;
		}
		if(i==n-1)
		{
			break;
		}
		else{
			count++;
		}
		
	}
	if(count%2==0)
	{
		cout<<"First"<<endl;
		}
		else {
			cout<<"Second"<<endl;
		}	
	}
	return 0;
}
