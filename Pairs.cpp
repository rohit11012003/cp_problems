#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<int , int > > v;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	vector<pair<int, int> >v1;
	for(int i=0;i<v.size();i++)
	{
		int a=v[i].first;
		int b=v[i].second;
		for(int j=i;j<v.size();j++)
		{
			if(v[j].first!=a)
			{
				i=j-1;
				v1.push_back({a,b});
				break;
			}
			else{
				if(v[j].second<b)
				{
					b=v[j].second;
				}
			}
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i].first<<" "<<v1[i].second<<endl;
	}
	sort(v1.begin(),v1.end());
	int x1=v1[0].first;
	int x2=v1[0].second;
	int ind=-1;
	for(int i=1;i<v1.size();i++)
	{
		if(v1[i].first>x2)
		{
			ind=i;
			break;
		}
		else{
			x1=v1[i].first;
			x2=min(x2,v1[i].second);
		}
	}
	if(ind==-1)
	{
		cout<<"YES"<<endl;
	}
	else{
	int ind2=-1;
	int x3=v1[ind].first;
	int x4=v1[ind].second;
	for(int i=ind+1;i<v1.size();i++)
	{
		if(v1[i].first>x4)
		{
			ind2=i;
			break;
		}
		else {
			x4=min(x4,v1[i].second);
		}
	}
	if(ind2==-1)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	}
}
