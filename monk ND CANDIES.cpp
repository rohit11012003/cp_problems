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
		multiset<int> v;
		for(int i=0;i<n;i++)
		{
			int g;
			cin>>g;
			v.insert(g);
		}
		long long int count=0;
		for(int i=0;i<k;i++)
		{
			auto it=v.end();
			it--;
			count=count+(*(it));
			v.insert((*it)/2);
			v.erase(it);
			
		}
		cout<<count<<endl;
	}
}
