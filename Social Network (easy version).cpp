#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> v;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int z=0;
		int t;
		cin>>t;
		for(int j=0;j<v.size();j++)
		{
			if(t==v[j])
			{
				z=1;
				break;
			}
		}
		if(z==0)
		{
			if(v.size()<k)
			{
				v.push_back(t);
			}
			else if(v.size()==k)
			{
				v.erase(v.begin()+0);
				v.push_back(t);
			}
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[v.size()-1-i]<<" ";
	}
	
}
