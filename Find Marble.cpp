#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s;
	int t;
	cin>>s>>t;
	int a[n];
	t=t-1;
	s=s-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(t==s)
	{
		cout<<0<<endl;
		return 0;
	}
	int count=0;
	int u=s;
	int h=0;
	while(u!=t);
	{
		count++;
		u=a[u];
		if(u==s)
		{
			cout<<-1<<endl;
			return 0;
		}
		
	}
	cout<<count<<endl;
	return 0;
	
}
