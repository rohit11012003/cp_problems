#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a;
	cin>>b;
	int c=a.size();
	int d=b.size();
	if(c!=d)
	{
		cout<<max(c,d);
	}
	else if(a==b)
	{
		cout<<-1;
	}
	else{
		cout<<max(c,d);
	}
	/*
else{
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<n-i<<endl;
			break;
		}
		else if(a[n-i-1]!=b[n-1-i])
		{
			cout<<n-i<<endl;
			break;
		}
	}}*/
	return 0;
}
