#include<bits/stdc++.h>
using namespace std;
vector<long long int > v;
const long long int N=100005;
long long int pri[N];
int main()
{
	for(long long int i=2;i<100005;i++)
{
	if(pri[i]==0)
	{
		for(long long int j=2*i;j<10005;j=j+i)
		{
			pri[j]=1;
		}
	}
}
for(int i=2;i<100005;i++)
{
	if(pri[i]==0)
	{
		v.push_back(i);
	}
}
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<long long int > ans;
	
}
