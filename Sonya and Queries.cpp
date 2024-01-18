#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	unordered_map<long long int,long long int> m;
	while(t--)
	{
		char c;
		cin>>c;
		if(c=='+')
		{
			long long int a;
			cin>>a;
			m[a]=m[a]+1;
		}
		else if(c=='-')
		{
			long long int a;
			cin>>a;
			m[a]=m[a]-1;
		}
		else if(c=='?')
		{
			long long int count=0;
			string s;
			cin>>s;
			for(auto ma : m)
			{
				long long int x1=ma.first;
				long long int y1=ma.second;
				stringstream str;
				str<<x1;
				string s1;
				str>>s1;
				int f=0;
				if(s1.size()==s.size())
				{
					for(int i=0;i<s.size();i++)
					{
						int k=s1[i];
						if(s[i]=='1'&&k%2==0)
						{
							f=1;
							break;
						}
						else if(s[i]=='0'&&k%2!=0)
						{
							f=1;
							break;
						}
					}
				}
				else if(s1.size()>s.size())
				{
					string g;
					g.append(s1.size()-s.size(),'0');
					s=g+s;
					for(int i=0;i<s.size();i++)
					{
						int k=s1[i];
						if(s[i]=='1'&&k%2==0)
						{
							f=1;
							break;
						}
						else if(s[i]=='0'&&k%2!=0)
						{
							f=1;
							break;
						}
					}
				}
					else if(s.size()>s1.size())
				{
					string g;
					g.append(s.size()-s1.size(),'0');
					s1=g+s1;
					for(int i=0;i<s.size();i++)
					{
						int k=s1[i];
						if(s[i]=='1'&&k%2==0)
						{
							f=1;
							break;
						}
						else if(s[i]=='0'&&k%2!=0)
						{
							f=1;
							break;
						}
					}
				}
				if(f==0)
				{
					count=count+y1;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
