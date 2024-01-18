#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_map<long long int,int > m1;
	map<long long int, int> m2;
	map<pair<long long int,long long  int>, int> m3;
	for(int i=0;i<n;i++)
	{
		long long int a,b;
		cin>>a>>b;
		m1[a]=m1[a]+1;
		m2[b]=m2[b]+1;
		m3[{a,b}]=m3[{a,b}]+1;
	}
	long long int count=0;
	for(auto it : m1)
	{
	//	cout<<it.first<<" "<<it.second<<endl;
		long long int f=it.second;
		count=count+(f*(f-1)/2);
	}
	for(auto it : m2)
	{
		long long int f=it.second;
		count=count+(f*(f-1)/2);
	}
	
	cout<<count<<endl;
}
