#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> v;
	v.push_back(0);
	int count=0;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
		}
		v.push_back(count);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		cout<<v[r-1]-v[l-1]<<endl;
	}
	return 0;
}
