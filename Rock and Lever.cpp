#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int> > v;
		for(int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			vector<int> h;
			for(int j=30;j>=0;j--)
			{
				h.push_back((a>>j)&1);
			}
			v.push_back(h);
		}
		long long int count=0;
		vector<int> v1;
		for(int i=0;i<v.size();i++)
		{
			for(int j=0;j<=30;j++)
			{
				if(v[i][j]==1)
				{
					v1.push_back(j);
					break;
				}
			}
	
		}
		map<int,int> m;
		for(int i=0;i<v1.size();i++)
		{
			m[v1[i]]=m[v1[i]]+1;
		}
		vector<long long int> v2;
		for(auto ma :m)
		{
			v2.push_back(ma.second);
		}
		for(int i=0;i<v2.size();i++)
		{
			if(v2[i]>=2)
			{
				count=count+((v2[i]*(v2[i]-1))/2);
			}
		}
		cout<<count<<endl;
	
	
	}
	return 0;
	
}
