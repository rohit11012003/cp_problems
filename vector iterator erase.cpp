#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int k;
	cin>>k;
	auto it=find(v.begin(),v.end(),k);
	v.erase(it);
	for(auto m : v)
	{
		cout<<m<<" ";
	}
}
