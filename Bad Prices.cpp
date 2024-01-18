#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		long long int n;
		cin>>n;
		vector<int> v;
		for(long long int i=0;i<n;i++)
		{
			long long int h;
			cin>>h;
			v.push_back(h);
		}
		vector<int> g=v;
		
		long long int count=0;
		for(int i=0;i<n-1;i++)
		{
			v=g;
			sort(v.begin()+i+1,v.end());
			if(v[i]>v[i+1])
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
