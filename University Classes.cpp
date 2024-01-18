#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int a=0;
	int count=0;
	for(int i=0;i<7;i++)
	{
		a=0;
		for(int j=0;j<n;j++)
		{
			if(v[j][i]=='1')
			{
				a++;
			}
		}
		if(a>count)
		{
			count=a;
		}
	}
	cout<<count<<endl;
	return 0;
}
