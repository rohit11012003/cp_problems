#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin>>s;
	string s;
	vector<int> a;
	for(int i=0;i<10;i++)
	vector<string> v;
	{
		string g;
		cin>>g;
		v.push_back(g);
	}
	for(int i=0;i<80;i=i+10)
	{
		for(int j=0;j<10;j++)
		{
			string e=s.substr(i,10);
			e.empty();
			if(e==v[j])
			{
				a.push_back(j);
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		cout<<a[i];
	}
	return 0;
}
