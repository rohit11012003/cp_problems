#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int n,m,k,t;
	cin>>n>>m>>k>>t;
	
	vector<pair<long long int,long long int> > v;
	for(int i=0;i<k;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size()-1;i++)
	{
		
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i].first==v[j].first&&v[i].second>v[j].second)
			{
				swap(v[i],v[j]);
			}
		}
	}
	for(int i=0;i<t;i++)
	{ cout<<i<<endl;
		int a,b;
		cin>>a>>b;
		cout<<a<<" "<<b<<"TGS";
	long long 	int h=0;
	cout<<"GDGt";
		for(int j=0;j<v.size();j++)
		{
			cout<<j<<endl;
			if(v[j].first==a&&v[j].second==b)
			{
				cout<<"Waste"<<endl;
			}
			else if(v[j].first>a)
			{
				break;
			}
			else if(v[j].first==a&&v[j].second>b)
			{
				break;
			}
			else {
				h++;
			}
		}
		cout<<h<<endl;
		long long int z=(a*m)+b;
		int h1=(z-h-1)%3;
			if(h1==0)
			{
				cout<<"Carrots"<<endl;
			}
			else if(h1==1)
			{
				cout<<"Kiwis"<<endl;
			}
			else if (h1==2)
			{
				cout<<"Grapes"<<endl;
			}
	}
	return 0;


	
	
	
}
