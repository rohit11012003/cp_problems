#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	
	int u=0;
	int as;
	vector<pair<int,int> >v;
	for(int j=0;j<q;j++)
	{
	
		int t;
		cin>>t;
		if(t==1)
		{
			long long int i,x;
			cin>>i>>x;
			if(u==0)
			{
			
			sum=sum-a[i-1]+x;
			cout<<sum<<endl;
			a[i-1]=x;
			}
			else {
			int p=0;
			for(int s=0;s<v.size();s++)
			{
				if(v[s].first==i-1)
				{
					sum=sum-v[s].second+x;
					cout<<sum<<endl;
					v[s].second=x;
					p=1;
				}
				if(i-1<v[s].first)
				{
					break;
				}
			}
			if(p==0)
			{
				sum=sum-as+x;
				cout<<sum<<endl;
				v.push_back(make_pair(i-1,x));
			}
			
			sort(v.begin(),v.end());
		}
		}
		else if(t==2)
		{
			
			long long int x;
			cin>>x;
			sum=n*x;
			as=x;
			cout<<sum<<endl;
			u=1;
			v.clear();
			
		}
	}
	return 0;
}
