#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	int sum=0;
	vector<int> s=v;
	sort(s.begin(),s.end());
	int t=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+s[i];
		if(sum>k)
		{
			t=i;
			break;
		}
		if(i==n-1)
		{
			t=n;
		}
		
	}
	if(t==0)
	{
		cout<<0<<endl;
	}
	else{
	
	cout<<t<<endl;
	for(int i=0;i<t;i++)
	{
		if(count==t)
		{
			break;
		}
		if(i==0)
		
		{
		for(int j=0;j<n;j++)
		{
			if(s[i]==v[j])
			{
				cout<<j+1<<" ";
				count++;
				if(count==t)
				{
					break;
				}
			}
		}	
		}
		else if(i>0)
		{
		
	if(s[i]==s[i-1])
		{
	}
	
	else{
		for(int j=0;j<n;j++)
		{
			if(s[i]==v[j])
			{
				cout<<j+1<<" ";
				count++;
				if(count==t)
				{
					break;
				}
			}
		}}}}
		cout<<"hello world";
	}
	return 0;
	
}
