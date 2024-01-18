#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<pair<long long int,long long int> > v;
	for(long long int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		v.push_back({a,i});
	}
	sort(v.begin(),v.end());
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i].first<<" "<<v[i].second<<endl;
//	}
	vector<pair<long long int , long long int> > v1;
	for(long long int i=0;i<n;i++)
	{
		long long int y=i;
		long long int count=0;
		long long int diff;
		long long int k=v[i].first;
		for(int j=i;j<n;j++)
		{
			if(v[j].first!=k)
			{
				i=j-1;
				break;
			}
			else{
				count++;
			}
			if(j==n-1)
			{
				i=n-1;
				break;
			}
		}
	//	cout<<"count is for  "<<v[i].first<<" is"<<count<<endl;
		if(count==1)
		{
			v1.push_back({k,0});
		}
		else{
			int f=0;
		//	cout<<v[y+1].second<<" "<<v[y].second<<endl;
			diff=v[y+1].second-v[y].second;
		//	cout<<"diff is"<<diff<<endl;
			for(long long int u=1;u<count;u++)
			{
			//	cout<<v[y+1].second<<" "<<v[y].second<<endl;
				if(diff!=(v[y+1].second-v[y].second))
				{
					f=1;
					break;
				}
				else{
					y++;
				}
				
			}
			if(f==0)
			{
				v1.push_back({k,diff});
			}
		}
	}
	cout<<v1.size()<<endl;
	for(long long int i=0;i<v1.size();i++)
	{
		cout<<v1[i].first<<" "<<v1[i].second<<endl;
	}
	return 0;
}
