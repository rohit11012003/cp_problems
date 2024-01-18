#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string g="CODEFORCES";
	int t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='C')
		{
			vector<int> v;
			int k=0;
			string f;
			for(int j=i;j<s.size();j++)
			{
				if(s[j]==g[k])
				{
					v.push_back(j);
					k++;
					f=f+s[j];
					
				}
				if(k==g.size())
				{
					break;
				}
				
			}
			cout<<f<<endl;
			if(f==g)
			{
				vector<int> v1;
				for(int i=0;i<v.size()-1;i++)
				{
					v1.push_back(v[i+1]-v[i]);
				}
				sort(v1.begin(),v1.end(),greater<int>());
				if(v1[1]==1)
				{
					t=1;
					break;
				}
			}
		}
		if(t==1)
		{
			break;
		}
	}
	if(t==1)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
