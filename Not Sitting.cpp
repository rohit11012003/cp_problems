#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	
	int n,m;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			v.push_back(max(i,n-1-i)+max(j,m-1-j));
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<=(n*m)-1;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;}
	return 0;
}
