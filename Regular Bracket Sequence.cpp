#include<bits/stdc++.h>
using namespace std;
int main()
{
	int u;
	cin>>u;
	for(int l=0;l<u;l++)
	{
		string s;
		cin>>s;
		int t=0;
		if(s[0]==')')
		{
			cout<<" NO"<<endl;
		}
	else if(s.size()%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else{
			int g=0;
			int h=0;
			int a=0;
			int b=0;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='(')
				{
					g++;
				}
				else if(s[i]==')')
				{
					h++;
				}}
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='(')
				{
					a++;
				}
				else if(s[i]==')')
				{
					b++;
				}
			
				else  if(s[i]=='?')
				{
					if(g<s.size()/2)
					{
						a++;
						g++;
					}
					else{
						b++;
					}
				}
				if(i==s.size()-1)
				{
					if(a!=b)
					{
						t=1;
						cout<<"NO"<<endl;
						break;
					}
					if(t==0)
					{
						cout<<"YES"<<endl;
					}
				}
				if(b>a)
				{
					t=1;
					cout<<"NO"<<endl;
					break;
				}
			}
			
		}
		
	}
	
}
