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
	int a=1;
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[0])
		{
			a++;
		}
	}
	int b=n-a;
	if(a>b)
	{
		cout<<v[0]<<endl;
	}
	else {
		for(int i=1;i<n;i++)
		{
			if(v[i]!=v[0])
			{
				cout<<v[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
