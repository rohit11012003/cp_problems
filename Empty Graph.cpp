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
		if(k==n)
		{
			cout<<1000000000<<endl;
		}
		else{
			vector<pair<long long  int , int > > v;
			for(int i=0;i<n;i++)
			{
				v.push_back({a[i],i});
			}
			sort(v.begin(),v.end());
			
			
				//cout<<"Hello"<<endl;
				
				for(int i=0;i<k;i++)
				{
					int z=v[i].second;
					a[z]=1000000000;
					v[i].first=1000000000;
				}
				
				long long int mi=v[k].first;
				if(k>=2)
				{
					long long int z3=1000000000;
					cout<<min(z3,2*mi)<<endl;
				}
				else{
					if(k==1)
					{
						sort(v.begin(),v.end());
						long long int p=v[v.size()-2].first;
						cout<<min(p,2*mi)<<endl;
					}
				}
			
		}
	}
	
}
