#include<bits/stdc++.h>
using namespace std;
//#define long long ll;
int main()
{

	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long int k;
		cin>>n>>k;
		vector<vector<int > > v1;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
				vector<int > h;
		for(int j=30;j>=0;j--)
	{
		h.push_back((a[i]>>j)&1);
	}
			
			v1.push_back(h);
		}
		vector<pair<int,int> > v2;
		for(int j=0;j<=30;j++)
		{
			int count=0;
			for(int i=0;i<n;i++)
			{
				if(v1[i][j]==0)
				{
					count++;
				}
			}
			v2.push_back({count,j});
		}
		vector<int> v3;
		for(int i=0;i<=30;i++)
		{
			if(k>=v2[i].first)
			{
				k=k-v2[i].first;
				v3.push_back(i);
			}
		}
		long long int ans=0;
		for(int i=0;i<v3.size();i++)
		{
			ans=ans+pow(2,30-v3[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
	




}

