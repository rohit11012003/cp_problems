#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<long long int>v;
		for(int i=1;i<n-1;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])
			{
				v.push_back(i);
			}
		}
		vector<pair<long long int, long long int> >v1;
		for(int i=0;i<v.size();i++)
		{
			int count=1;
			if(i==v.size()-1)
			{
				count=1;
			}
			else
			{
			
			for(int j=i+1;j<v.size();j++)
			{
				if(v[j]<v[i]+k-2)
				{
					count++;
				}
				else {
					break;
				}
			}}
			if(v[i]+k-2>=n-1)
			{
			v1.push_back(make_pair(count,n-k));	
			}
			else{
			
			v1.push_back(make_pair(count,v[i]-1));}
		}
		
		sort(v1.begin(),v1.end());
		for(int i=0;i<v1.size();i++)
		{
		cout<<v1[i].first<<" "<<v1[i].second<<endl;
		}
		int h=0;
	for(int i=v1.size()-1;i>0;i--)
	{
		if(v1[i-1].first<v1[i].first)
		{
			h=i;
			break;
		}
	}
	cout<<h<<endl;
	cout<<v1[h].first+1<<" "<<v1[h].second+1<<endl;
	}
	return 0;
}
