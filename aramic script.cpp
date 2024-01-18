#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	vector<string> v;
	for(int l=0;l<n;l++)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size()-1;i++)
		{
			for(int j=i+1;j<s.size();j++)
			{
				if(s[i]==s[j])
				{
					s.erase(s.begin()+j);
				}
			}
		}
		for(int i=0;i<s.size()-1;i++)
		{
			for(int j=0;j<s.size();j++)
			{
				if(s[j]>s[i])
				{
					swap(s[i],s[j]);
				}
			}
		}
		cout<<s<<endl;
		int c=0;
		for(int j=0;j<l;j++)
		{
			if(s==v[j])
			{
				c=1;
			}
		}
		if(c==0)
		{
			count++;
		}
		v.push_back(s);
	}
	cout<<count<<endl;
	return 0;
}
