#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count=0;
		vector<int> v;
		for(int i=0;i<n-1;i++)
		{
			if(i==0)
			{
				v.push_back(count);
			}
			else{
				if(a[i]>a[i-1]&&a[i]>a[i+1])
				{
					count++;
					v.push_back(count);
				}
				else {
					v.push_back(count);
				}
			}
		}
		v.push_back(count);
//		for(int i=0;i<v.size();i++)
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
		vector<pair<int,int> > v1;
		
		for(int i=0;i<=(n-k);i++)
		{
			if(i!=n-k)
			{
				if(a[i+k-1]>a[i+k]&&a[i+k-1]>a[i+k-2])
				{
					v1.push_back({v[i+k-1]-v[i]-1,i});
				}
				else{
					v1.push_back({v[i+k-1]-v[i],i});
				}
			}
			else{
				v1.push_back({v[i+k-1]-v[i],i});
			}
		}
//		for(int i=0;i<v1.size();i++)
//		{
//			cout<<v1[i].first<<" "<<v1[i].second<<endl;
//		}
		sort(v1.begin(),v1.end());
		int p=v1[v1.size()-1].first;
		int u=v1.size()-1;
		for(int i=v1.size()-1;i>=0;i--)
		{
			if(v1[i].first==p)
			{
				u=min(u,i);
			}
			else {
				break;
			}
		}
		cout<<v1[u].first+1<<" "<<v1[u].second+1<<endl;
		
	}
	return 0;
}
