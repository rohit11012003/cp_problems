#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int n;
	long long int k;
	cin>>n>>k;
	string s;
	cin>>s;
	long long int count=0;
	int card=0;
	vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int j=s[i];
		v.push_back(j);
	}
	map<long long int,long long int> m;
	for(long long int i=0;i<v.size();i++)
	{
		m[v[i]]=m[v[i]]+1;
	}
	vector<long long int> v1;
	for(auto ma:m)
	{
		v1.push_back(ma.second);
	}
	sort(v1.begin(),v1.end(),greater<int>());
//	for(int i=0;i<v1.size();i++)
//	{
//		cout<<v1[i]<<" ";
//	}
	for(long long int i=0;i<v1.size();i++)
	{
		if(card+v1[i]<=k)
		{
			card=card+v1[i];
			count=count+(v1[i]*v1[i]);
		}
		else{
		long long 	int t=k-card;
			count=count+(t*t);
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}
