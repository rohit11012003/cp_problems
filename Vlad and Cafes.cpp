#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	v.push_back(make_pair(a[n-1],n-1));
	for(int i=n-2;i>=0;i--)
	{
		int t=0;
		for(int j=0;j<v.size();j++)
		{
			if(a[i]==v[j].first)
			{
				t=1;
				break;
			}
		}
		if(t==0)
			{
				v.push_back(make_pair(a[i],i));
			}
	}
	cout<<v[v.size()-1].first<<endl;
	return 0;
}
