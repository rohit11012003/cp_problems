#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,m;
		cin>>n>>m;
		if(n==1||m==1)
		{
		    for(int i=0;i<n;i++)
		    {
		    	string s;
		    	cin>>s;
			}
			cout<<"YES"<<endl;
		}
		else {
			vector<string> v;
			for(int i=0;i<n;i++)
			{
				string s;
				cin>>s;
				v.push_back(s);
			}
			int le=0;
			int up=0;
			int p=0;
			int q=0;
		
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(v[i][j]=='R')
					{
						p=1;
						break;
					}
				}
				if(p==1)
				{
					break;
				}
				else {
					up++;
				}
			}
		
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(v[j][i]=='R')
					{
						q=1;
						break;
					}
				}
				if(q==1)
				{
					break;
				}
				else {
					le++;
				}
			}
			
			vector<int> x;
			vector<int> y;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(v[i][j]=='R')
					{
						x.push_back(j);
						y.push_back(i);
					}
				}
			}
			int u=0;
			for(int i=0;i<x.size();i++)
			{
				int h=x[i]-le;
				int g=y[i]-up;
				if(h<=0&&g<=0)
				{
					u=1;
					break;
				}
			}
			if(u==0)
			{
				cout<<"NO"<<endl;
			}
			else {
				cout<<"YES"<<endl;
			}
			
		}
	}
	return 0;
}
