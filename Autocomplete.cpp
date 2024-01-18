#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<string> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string g;
		cin>>g;
		v.push_back(g);
	}
	string ans;
	int a=0;
	for(int i=0;i<n;i++)
	{
		string t;
		if(v[i].size()>=s.size())
		{
			for(int j=0;j<s.size();j++)
			{
				t=t+v[i][j];
			}
			if(s==t)
			{
				if(a==0)
				{
					ans=v[i];
					a=1;
				}
				else {
					for(int h=s.size()-1;;h++)
					{
						
						if(h==(v[i].size()-1))
						{
							ans=v[i];
							break;
						}
						else if(h==(ans.size()-1))
						{
							ans=ans;
						}
						
						if(v[i][h]>ans[h])
						{
							ans=ans;
							break;
						}
						else if(v[i][h]<ans[h])
						{
							ans=v[i];
							break;
						}
					}
				}
			}
		}
	}
	if(a==0)
	{
		cout<<s<<endl;
	}
	else if(a==1)
	{
		cout<<ans<<endl;
		
	}
	return 0;
}
