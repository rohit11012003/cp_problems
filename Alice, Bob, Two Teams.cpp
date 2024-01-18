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
	string s;
	cin>>s;
	long long int ma;
	long long int count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			count=count+a[i];
		}
	}
	
	ma=count;
	long long int count1=count;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
			count=count+a[i];
		}
		else{
			count=count-a[i];
		}
		ma=max(count,ma);
	}
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='A')
		{
			count1=count1+a[i];
		}
		else{
			count1=count1-a[i];
		}
		ma=max(count1,ma);
	}
	cout<<ma<<endl;
	return 0;
}
