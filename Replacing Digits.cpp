#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	string s;
	cin>>s;
	vector<int> v;
	vector<int> b;
	for(int i=0;i<s.size();i++)
	{
		stringstream str;
		str<<s[i];
		int t;
		str>>t;
		v.push_back(t);
		
	}
		for(int i=0;i<a.size();i++)
	{
		stringstream str;
		str<<a[i];
		int t;
		str>>t;
		b.push_back(t);
		
	}
	sort(v.begin(),v.end(),greater<int>());
	int t=0;
	for(int i=0;i<b.size();i++)
	{
		
		if(b[i]<v[t])
		{
			b[i]=v[t];
			t++;
			if(t==v.size())
			{
				break;
			}
		}
	}
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i];
	}
	cout<<endl;
	return 0;
}
