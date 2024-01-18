#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;

	vector<int> v;
	int c='a';
	v.push_back(c);
	if(s[0]!=v[0])
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		int u=0;
		int le=s[i];
		for(int j=0;j<v.size();j++)
		{
			if(v[j]==le)
			{
				u=1;
				break;
			}
			
		}
		if(u==0)
		{
			if(le!=v[v.size()-1]+1)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			else {
				v.push_back(le);
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
