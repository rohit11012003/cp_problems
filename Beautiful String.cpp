#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		string s;
		cin>>s;
		int n=s.size();
		int t=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='?')
			{
				
			}
			else{
				if(s[i]==s[i+1])
				{
					t=1;
					break;
				}
			}
		}
		if(t==1)
		{
			cout<<-1<<endl;
		}
		else if(n==1)
		{
			if(s[0]=='?')
			{
				cout<<'a'<<endl;
			}
			else {
				cout<<s<<endl;
			}
		}
		else if(t==0)
		{
			for(int i=0;i<n;i++)
			{
			
			if(s[i]=='?')
			{
				if(i==0)
				{
					if(s[i+1]=='a')
					{
						s[i]='c';
					}
				else	if(s[i+1]=='b')
					{
						s[i]='a';
					}
				else	if(s[i+1]=='c')
					{
						s[i]='a';
					}
					else if(s[i+1]=='?')
					{
						s[i]='a';
					}
				}
				else if(i==(n-1))
				{
					if(s[i-1]=='a')
					{
						s[i]='c';
					}
					if(s[i-1]=='b')
					{
						s[i]='a';
					}
					if(s[i-1]=='c')
					{
						s[i]='b';
					}
				}
				else {
					if(s[i-1]=='a'&&s[i+1]=='c')
					{
						s[i]='b';
					}
					else	if(s[i-1]=='a'&&s[i+1]=='b')
					{
						s[i]='c';
					}
					else	if(s[i-1]=='a'&&s[i+1]=='a')
					{
						s[i]='b';
					}
					else	if(s[i-1]=='b'&&s[i+1]=='b')
					{
						s[i]='c';
					}
					else	if(s[i-1]=='c'&&s[i+1]=='c')
					{
						s[i]='a';
					}
						else if(s[i-1]=='b'&&s[i+1]=='a')
					{
						s[i]='c';
					}
						else if(s[i-1]=='b'&&s[i+1]=='c')
					{
						s[i]='a';
					}
						else if(s[i-1]=='c'&&s[i+1]=='a')
					{
						s[i]='b';
					}
					else if(s[i-1]=='c'&&s[i+1]=='b')
					{
						s[i]='a';
					}
					else if(s[i-1]=='a'&&s[i+1]=='?')
					{
						s[i]='b';
					}
						else if(s[i-1]=='b'&&s[i+1]=='?')
					{
						s[i]='c';
					}
						else if(s[i-1]=='c'&&s[i+1]=='?')
					{
						s[i]='a';
					}
				}
			}}
			cout<<s<<endl;
		}
	}
	return 0;
}
