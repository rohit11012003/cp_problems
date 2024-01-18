#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int f=0;f<t;f++)
	{
	long long n,k;
	cin>>n>>k;
	vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int y;
		cin>>y;
		v.push_back(y);
	}
	for(long long int b=0;b<k;b++)
	{
	
	long long int me;
	long long int ma;
	int c=0;
	sort(v.begin(),v.end());
	ma=v[v.size()-1];
	for(long long int i=0;i<v.size();i++)
	{
		if(i!=v[i])
		{
			me=i;
			c=1;
			break;
		}
	}
	if(c==0)
	{
		me=v.size()+1;
	}
	long long int r=round((me+ma)/2);
	v.push_back(r);
}
	sort(v.begin(),v.end());
	long long int count=0;
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]!=v[i+1])
		{
			count++;
		}
	}
	cout<<count+1<<endl;
	}
	return 0;
}
