#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	vector<int> a;
	vector<int> b;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i][j]=='G')
			{
				a.push_back(j);
			}
			else if(v[i][j]=='S')
			{
				b.push_back(j);
			}
		}
	}
	vector<int> l;
	for(int i=0;i<n;i++)
	{
		if(b[i]!=a[i])
		{
			
		
		l.push_back(b[i]-a[i]);}
	}
	sort(l.begin(),l.end());
	if(l[0]<0)
	{
		cout<<-1<<endl;
	}
	else{
//		for(int i=0;i<l.size();i++)
//		{
//			cout<<l[i]<<" ";
//		}
//		cout<<endl;
		set<int> x;
		for(int i=0;i<l.size();i++)
		{
			x.insert(l[i]);
		}
		cout<<x.size()<<endl;
	}
	return 0;
}
