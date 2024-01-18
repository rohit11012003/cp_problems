#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
		long long int n;
		cin>>n;
		string s;
		cin>>s;
			int hg;
			int ch=0;
		int count=0;
		int u=0;
		if(s[0]=='0')
		{
			u=1;
			for(int g=0;g<n;g++)
			{
				if(s[g]=='0')
				{
					count++;
				}
				else{
					break;
				}
			}
		}
		if(count==n-1)
		{
			cout<<s<<endl;
		}
		else{
		
			for(int i=n-1;i>=0;i--)
			{
				if(s[i]=='0')
				{
					hg=i;
					ch=1;
					break;
				}
			}
			if(ch==0)
			{
				cout<<s<<endl;
			}
			else{
				vector<int> v;
				if(u==1)
				{
				for(int g=0;g<count;g++)
				{
					v.push_back(0);
					
				}}
				if(u==1)
				{
					if((count-1)!=hg)
					{
						v.push_back(0);
					}
				}
				else{
					v.push_back(0);
				}
				for(int i=0;i<(n-hg);i++)
				{
					v.push_back(1);
				}
				for(int i=0;i<v.size()-1;i++)
				{
					cout<<v[i];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
