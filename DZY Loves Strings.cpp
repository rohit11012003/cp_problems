#include<bits/stdc++.h>
using namespace std;
int main()
{
	 string s;
	cin>>s;
	int sum=0;
	int k;
	cin>>k;
	vector<int> v;
	int t=0;
	int count=0;
	for(int i=0;i<26;i++)
	{
		int u;
		cin>>u;
		v.push_back(u);
		if(u>count)
		{
			t=i;
			count=u;
		}
	}
	vector<int>w=v;
	sort(w.begin(),w.end(),greater<int>());
	int low=s.size();
	int upper=low+k;
	int first=(upper*(upper+1)/2)-(low*(low+1)/2);
	sum=w[0]*first;
	for(int i=0;i<s.size();i++)
	{
		int z=s[i]-97;
		sum=sum+(v[z]*(i+1));
	}
	cout<<sum<<endl;
	return 0;
}
