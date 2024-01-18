#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int t=1;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]!=a[i])
		{
			t++;
		}
	}
	
	if(t==1)
	{
		cout<<"YES"<<endl;
	}
	else if(t==2)
	{
		cout<<"YES"<<endl;
		
	}
	else if(t==3)
	{
		vector<int>v;
		int u=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]!=a[i])
			{
				u++;
				v.push_back(i+1);
			}
			if(u==2)
			{
				break;
			}
		}
		
		if(a[v[0]]-a[0]==a[v[1]]-a[v[0]])
		{
			cout<<"YES"<<endl;
		}
		else {
		 cout<<"NO"<<endl;
		}
		
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
	
}
