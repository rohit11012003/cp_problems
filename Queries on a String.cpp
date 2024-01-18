#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int m;
	cin>>m;
	while(m--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		l=l-1;
		r=r-1;
		int z=k%(r-l+1);
		int t=r+1-z;
		string g;
		for(int i=t;i<=r;i++)
		
		{
			g=g+s[i];
		}
		for(int i=l;i<t;i++)
		{
			g=g+s[i];
		}
		for(int i=0;i<g.size();i++)
		{
			s[i+l]=g[i];
		}
			
		
	}
	cout<<s<<endl;
	return 0;
}
