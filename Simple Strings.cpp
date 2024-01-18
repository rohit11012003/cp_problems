#include<bits/stdc++.h>
using namespace std;
int main()

{
	string s;
	cin>>s;
	if(s.size()==1)
	{
		cout<<s<<endl;
	}
	else{
	
	long long int n=s.size();
	for(int i=1;i<s.size()-1;i++)
	{
		if(s[i]==s[i-1]&&s[i]==s[i+1])
		{
			int k=s[i];
			if(s[i]!='z')
			{
			k++;	
			}
			else{
				k--;
			}
			char c=k;
			s[i]=k;
		}
		else if(s[i]==s[i-1])
		{
			int k=s[i];
			if(s[i]=='z')
			{
				k--;
				int z=s[i+1];
				if(k==z)
				{
					k--;
				}
			}
			else{
				if(s[i]=='y'&&s[i-1]=='z')
				{
					s[i]='a';
				}
				else {
					k++;
					int z=s[i-1];
					if(z==k)
					{
						k++;
					}
					char c=k;
					s[i]=k;
				}
			}
			
		}
	}
	if(s[n-1]==s[n-2])
	{
		if(s[n-1]=='z')
		{
			s[n-1]='y';
		}
		else {
			int k=s[n-1];
			k++;
			char c=k;
			s[n-1]=c;
		}
	}
	cout<<s<<endl;}
	return 0;
}
