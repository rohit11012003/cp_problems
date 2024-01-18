#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int z;
	cin>>z;
	for(int f=0;f<z;f++)
	{
	long long int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	int u=0;
	int t;
	vector<int> g=v;
	sort(g.begin(),g.end());
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(v[j]==g[i])
			{
				 t=j;
				break;
			}}
			int as=v[t];
			for(int k=t-1;k>=i;k--)
			{
				if((as+v[k])%2==0)
				{
					u=1;
					break;
				}
				swap(v[k],v[k+1]);
			}
			if(u==1)
			{
				break;
			}
		}
		if(u==0)
		{
			cout<<"YES"<<endl;
		}
		else if(u==1)
		{
			cout<<"NO"<<endl;
		}}
		return 0;
	}

