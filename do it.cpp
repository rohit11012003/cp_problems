#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(int i=0;i<n;i++)
		if(s[i]=='U')
		  s[i]='D';
		else if(s[i]=='D')
		    s[i]='U';
		cout<<s<<endl;
	}
} 
