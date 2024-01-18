#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<long long int> v1[N];
const int N1=105;
int vis[N1];
void dfs(long long int ind)
{
	vis[ind]=1;
	for(auto child : v1[ind])
	{
		if(vis[child]==1) continue;
		dfs(child);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<pair<long long int , long long int > > v;
	
	for(int i=0;i<n;i++)
	{
		int z;
		cin>>z;
		long long int a,b;
		cin>>a>>b;
		//cout<<"value of z and a and b are "<<z<<" "<<a<<" "<<b<<endl;
		if(z==1)
		{
			v.push_back({a,b});
			for(int j=0;j<v.size();j++)
			{
				if(v[j].first<a&&v[j].second>a)
				{
					v1[v.size()-1].push_back(j);
				}
				else if(v[j].first<b&&v[j].second>b)
				{
					v1[v.size()-1].push_back(j);
				}
				 if(v[j].first>a&&v[j].first<b)
				{
					v1[j].push_back(v.size()-1);
				}
				else  if(v[j].second>a&&v[j].second<b)
				{
					v1[j].push_back(v.size()-1);
				}
			}
		}
		else if(z==2)
		{
			//cout<<i<<"it happen "<<endl;
			a=a-1;
			b=b-1;
			dfs(a);
			if(vis[b]==1)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
			for(int j=0;j<105;j++)
			{
				vis[j]=0;
			}
		}
		
	}

}
