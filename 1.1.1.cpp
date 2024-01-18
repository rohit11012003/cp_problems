#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	while(t--)
	{
		string s;
		cin>>s;
		vector< pair< int ,int> > v;
		for(int i=0;i<n;i++)
		{
			int g=s[i];
			v.push_back({g,i});
		}
		sort(v.begin(),v.end());
		long long int count=0;
		if(s.size()==1)
		{
			cout<<1<<endl;
		}
		else if(s.size()==2)
		{
			if(s[0]!=s[1])
			{
				cout<<2<<endl;
			}
			else{
				cout<<0<<endl;
			}
		}
		else{
		
		for(int i=1;i<v.size();i++)
		{
			if(v[i].first!=v[i-1].first&&v[i].first!=v[i+1].first)
			{
				count=count+1;
				v.erase(v.begin()+i)
			}
		}
		if(v[0].first!=v[1].first)
		{
			v.erase(v.begin());
			count++;
		}
		else if(v[v.size()-1]!=v[v.size()-2])
		{
			v.erase(v.begin()+v.size()-1);
			count++;
		}
	}}
}
