#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<long long int,int > > v;
		for(int i=0;i<=9;i++)
		{
			long long int a;
			cin>>a;
			v.push_back({a,i});
		}
		sort(v.begin(),v.end());
		if(v[0].second!=0)
		{
			for(int i=1;i<=v[0].first+1;i++)
			{
				cout<<v[0].second;
			}
			cout<<endl;
		}
		else{
			if(v[0].first<v[1].first)
			{
				cout<<1;
				for(int i=1;i<=v[0].first+1;i++)
				{
					cout<<0;
				}
				cout<<endl;
			}
			else{
				for(int i=1;i<=v[1].first+1;i++)
				{
					cout<<v[1].second;
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
