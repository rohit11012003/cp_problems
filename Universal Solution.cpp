#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string g;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='S')
			{
				g=g+'R';
			}
			else if(s[i]=='R')
			{
				g=g+'P';
			}
			else if(s[i]=='P')
			{
				g=g+'S';
			}
		}
		cout<<g<<endl;
	}
	return 0;
}
