#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n%2!=0)
		{
			cout<<"Mike"<<endl;
		}
		else {
			vector<pair<long long int,int>  > v1;
			vector<pair<long long int,int > > v2;
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					v1.push_back({a[i],i});
				}
				else{
					v2.push_back({a[i],i});
				}
			}
			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end());
			if(v1[0].first>v2[0].first)
			{
				cout<<"Mike"<<endl;
			}
			else if(v1[0].first<v2[0].first)
			{
				cout<<"Joe"<<endl;
			}
			else{
				if(v1[0].second>v2[0].second)
				{
					cout<<"Mike"<<endl;
				}
				else {
					cout<<"Joe"<<endl;
				}
			}
		}
	}
	return 0;
}
