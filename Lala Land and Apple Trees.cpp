#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair <long long int, long long int> > v;
	int x1=0;
	int x2=0;
	for(int i=0;i<n;i++)
	{
		long long int a1,a2;
		cin>>a1>>a2;
		if(a1>0)
		{
			x1=x1+1;
		}
		else if(a1<0)
		{
			x2=x2+1;
		}
		v.push_back( make_pair(a1,a2) );
	}
	sort(v.begin(),v.end());
	long long int sum=0;
	if(x1==x2)
	{
		for(int i=0;i<n;i++)
		{
			sum=sum+v[i].second;
		}
	}
	else if(x1>x2)
	{
		int i=0;
	while(v[i].first<0)
	{
		sum=sum+v[i].second;
		i++;
	}
	int t=0;
	for(int j=i;;j++)
	{
		sum=sum+v[j].second;
		t++;
		if(t>=x2+1)
		{
			break;
		}
	}
	}
	else if(x2>x1)
	{
		int i=n-1;
		while(v[i].first>0)
		{
			sum=sum+v[i].second;
			i--;
		}
		int t=0;
	for(int j=i;;j--)
	{
		sum=sum+v[j].second;
		t++;
		if(t>=x1+1)
		{
			break;
		}
	}
	}
	cout<<sum<<endl;
	return 0;
}
