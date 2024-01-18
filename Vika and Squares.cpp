#include<bits/stdc++.h> 
using namespace std;
int main()
{
long long 	int n;
	cin>>n;
	vector<pair<long long int ,long long int > > v;
	for(int i=0;i<n;i++)
	{
		long long int t;
		cin>>t;
		v.push_back({t,i});
	}
	sort(v.begin(),v.end());
	if(v[0].first!=v[1].first)
	{
		cout<<(n*(v[0].first)+(n-1))<<endl;
	}
	else if(v[0].first==v[n-1].first)
	{
		cout<<v[0].first*n<<endl;
	}
	else {
		long long int g=v[0].first;
		vector<long long int> v1;
		for(int i=0;i<n;i++)
		{
			if(v[i].first==g)
			{
				v1.push_back(v[i].second);
			}
			else{
				break;
			}
		}
//		for(int i=0;i<v1.size();i++)
//		{
//			cout<<v1[i]<<" ";
//		}
//		cout<<endl;
		vector<long long int > v2;
		for(int i=0;i<v1.size();i++)
		{
			if(i!=v1.size()-1)
			{
				v2.push_back(v1[i+1]-v1[i]-1);
			}
			else{
				v2.push_back(n-1-v1[i]+v1[0]);
			}
		}
//		for(int i=0;i<v2.size();i++)
//		{
//			cout<<v2[i]<<" ";
//		}
//		cout<<endl;
		sort(v2.begin(),v2.end(),greater<int>());
		cout<<(n*v[0].first)+v2[0]<<endl;
	}
	return 0;
}
