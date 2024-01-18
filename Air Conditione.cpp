#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,m;
		cin>>n>>m;
		vector<long long int > v;
		vector<pair<long long int ,long long int > > v1;
		for(int i=0;i<n;i++)
		{
			long long int t,l,h;
			cin>>t>>l>>h;
			if(i==0)
			{
				v.push_back(t);
				v1.push_back({l,h});
			}
			else{
				if(t==v[v.size()-1])
				{
					if(l>v1[v1.size()-1].first)
					{
						v1[v1.size()-1].first=l;
					}
					if(h<v1[v1.size()-1].second)
					{
						v1[v1.size()-1].second=h;
					}
				}
				else{
					v.push_back(t);
					v1.push_back({l,h});
				}
			}
		}
//		for(int i=0;i<v.size();i++)
//		
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0;i<v1.size();i++)
//		{
//			cout<<v1[i].first<<" "<<v1[i].second<<endl;
//		}
		long long int lo,up;
		int z=0;
		for(int i=0;i<v.size();i++)
		{
			
			if(i==0)
			{
				lo=m-v[0];
				up=m+v[0];
			if(up>=v1[i].first&&up<=v1[i].second)
				{
					lo=max(lo,v1[i].second);
				}
				else if(lo>=v1[i].first&&lo<=v1[i].second)
				{
					up=min(up,v1[i].second);
				}
				else if(lo<v1[i].first&&up>v1[i].second)
				{
					lo=v1[i].first;
					up=v1[i].second;
				}
				else{
					z=1;
				}
				}
			
			else{
				lo=lo-(v[i]-v[i-1]);
				up=up+v[i]-v[i-1];
			//	cout<<"initial values are "<<lo<<" "<<up<<endl;
				if(up>=v1[i].first&&up<=v1[i].second)
				{
					lo=max(lo,v1[i].first);
				}
				else if(lo>=v1[i].first&&lo<=v1[i].second)
				{
					up=min(up,v1[i].second);
				}
				else if(lo<v1[i].first&&up>v1[i].second)
				{
					lo=v1[i].first;
					up=v1[i].second;
				}
				else{
					z=1;
				}
			}
			if(z==1)
			{
				break;
			}
		//	cout<<lo<<" "<<up<<endl;
		}
		if(z==0)
		{
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
