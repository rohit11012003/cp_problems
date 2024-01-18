#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string g="CODEFORCES";
	int j=0;
	int t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==g[j])
		{
			if(i==0)
			{
				if(s[i+1]==g[j+1])
				{	j++;
				}
			}
			else{
				j++;
			}
		
		}
		if(j==g.size())
		{
			if(i==s.size()-1)
			{
				if(s[i-1]!=g[j-2])
				{
					t=0;
				}
				else{
					t=1;
					break;
				}
			}
			else{
				t=1;
			break;	
			}
		
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
