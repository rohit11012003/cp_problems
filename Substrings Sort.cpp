#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h=0;
	vector< pair <int,string> > v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int a=s.size();
		v.push_back( make_pair(a,s));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++)
	{
		int p=0;
		int b=v[i].second.size();
		for(int j=0;j<=v[i+1].second.size()-b;j++)
		{
			
			string s=v[i+1].second.substr(j,b);
			
			if(v[i].second==s)
			{
				p=1;
				break;
			}
		}
		if(p==0)
		{
			h=1;
			break;
		}
	}
	if(h==1)
	{
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<v[i].second<<endl;
		}
	}
	return 0;
}
