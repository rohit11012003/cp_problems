#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string g;
		cin>>g;
		v.push_back(g);
	}
	vector<pair<int,int> > v1;
	vector<pair<int,int> > v2;
	for(int i=0;i<n;i++)
	{
		int k=0;
		for(int j=0;j<m;j++)
		{
			if(v[i][j]=='*')
			{
				v1.push_back({i,j});
				k++;
			}
		}
		if(k!=0)
		{
			v2.push_back({i,k});
		}
		
	}
	if(v1.size()==0)
	{
		cout<<"YES"<<endl;
		cout<<1<<" "<<1<<endl;
		return 0;
	}
	int t=0;
	int x1=-1;
	for(int i=0;i<v2.size();i++)
	{
		if(v2[i].second>=2)
		{
			t++;
			x1=v2[i].first;
		}
		if(t>=2)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
if(t==0)
{
	map<int,int>  v3;
	for(int i=0;i<v1.size();i++)
	{
		v3[v1[i].second]=v3[v1[i].second]+1;
	}
	if(v3.size()>2)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		
		if(v3.size()==1)
		{
		int d;
			for(auto it : v3)
			{
			d=it.first;
			break;	
			}
			cout<<"YES"<<endl;
			cout<<1<<" "<<d+1<<endl;
			return 0;
		}
		else if(v3.size()==2)
		{
			vector<pair< int,int > > v4;
			for(auto it : v3)
			{
			v4.push_back({it.first,it.second});
			}
			int y3;
			int x3;
		
			if(v4[0].second>v4[1].second)
			{
				 y3=v4[0].first;
			}
			else {
				y3=v4[1].first;
			}
			for(int i=0;i<v.size();i++)
			{
				if(v1[i].second!=y3)
				{
					x3=v1[i].first;
					break;
				}
				
			}
			cout<<"YES"<<endl;
			cout<<x3+1<<" "<<y3+1<<endl;
			return 0;
			
		}
	}
}

int z=0;
int y1=-1;
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i].first!=x1&&z==0)
		{
			y1=v1[i].second;
			z=1;
		}
		else if(v1[i].first!=x1&&z==1)
		{
			if(v1[i].second!=y1)
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	if(y1==-1)
	{
		y1=0;
	}
	cout<<"YES"<<endl;
	cout<<x1+1<<" "<<y1+1<<endl;
	
	return 0;
}
