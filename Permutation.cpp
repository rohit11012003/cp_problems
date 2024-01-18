#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]==v[j])
			{
				v.erase(v.begin()+j);
				j--;
			}
		}
	}
	int count=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]<=n&&v[i]>=1)
		{
			count++;
		}
	}
	cout<<n-count<<endl;
	return 0;
}
