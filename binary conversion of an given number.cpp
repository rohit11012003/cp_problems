#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int j=30;j>=0;j--)
	{
		v.push_back((n>>j)&1);
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;
}
