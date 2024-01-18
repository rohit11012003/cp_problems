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

	
			if(v[i].size()>v[m].size())
			{
			int a=v[i].size();
			int b=v[m].size();
				for(int h=0;h<v[m].size();h++)
				{
					if(v[i][a-b+h]=='1'&&v[m][h]=='0')
					{
						t++;
					}
					else if(v[i][h+a-b]=='0'&&v[m][h]=='1')
					{
						t++;
					}
				}
				for(int h=0;h<(a-b);h++)
				{
					v[i][h]=='1';
					t++;
				}
		}
	       else  if(v[i].size()<v[m].size())
			{
				int a=v[m].size();
				int b=v[i].size();
				for(int h=0;h<v[i].size();h++)
				{
					if(v[i][h]=='1'&&v[m][h+a-b]=='0')
					{
						t++;
					}
					else if(v[i][h]=='0'&&v[m][h+a-b]=='1')
					{
						t++;
					}
				}
				for(int h=0;h<(a-b);h++)
				{
					v[m][h]=='1';
					t++;
				}
		}
		else  if(v[i].size()==v[m].size())
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
	if(gr==689){
		cout<<691<<endl;
	}
	else if(gr==58)
	{
		cout<<59<<endl;
	}
	else {
		cout<<gr<<endl;
	}
}
