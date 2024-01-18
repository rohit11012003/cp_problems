#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vector<string> v;
	for(int i=1;i<=m+1;i++)
	{
		int t;
		cin>>t;
		char res[100] ;
		itoa(t,res,2);
		string s;
		s=res;
		v.push_back(s);
	}
	int gr=0;
	for(int i=0;i<m;i++)
	{
		int t=0;
	
			if(v[i].size()>v[m].size());
			{
				for(int h=0;h<v[m].size();h++)
				{
					if(v[i][h]=='1'&&v[m][h]=='0')
					{
						t++;
					}
					else if(v[i][h]=='0'&&v[m][h]=='1')
					{
						t++;
					}
				}
				for(int h=v[m].size()-1;h<v[i].size();h++)
				{
					v[i][h]=='1';
					t++;
				}
		}
	       if(v[i].size()<v[m].size());
			{
				for(int h=0;h<v[i].size();h++)
				{
					if(v[i][h]=='1'&&v[m][h]=='0')
					{
						t++;
					}
					else if(v[i][h]=='0'&&v[m][h]=='1')
					{
						t++;
					}
				}
				for(int h=v[i].size()-1;h<v[m].size();h++)
				{
					v[m][h]=='1';
					t++;
				}
		}
		 if(v[i].size()==v[m].size());
			{
				for(int h=0;h<v[m].size();h++)
				{
					if(v[i][h]=='1'&&v[m][h]=='0')
					{
						t++;
					}
					else if(v[i][h]=='0'&&v[m][h]=='1')
					{
						t++;
					}
				}
		}
		if(t<=k)
		{
			gr++;
		}
	}
	cout<<gr<<endl;
}
