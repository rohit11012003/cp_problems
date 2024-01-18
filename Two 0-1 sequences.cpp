#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s1,s2;
		cin>>s1>>s2;
		if(n==m)
		{
			if(s1!=s2)
			{
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			int z=0;
			for(int i=0;i<=m-2;i++)
			{
				//cout<<"hello";
				if(s1[s1.size()-1-i]!=s2[s2.size()-1-i])
				{
					z=1;
					break;
				}
			}
			if(z==1)
			{
				cout<<"NO"<<endl;
			}
			else{
				//int p=s2[0];
				int p=0;
				for(int i=0;i<=n-m;i++)
				{
					if(s1[i]==s2[0])
					{
						p=1;
						break;
					}
				}
				if(p==1)
				{
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
	}
}
