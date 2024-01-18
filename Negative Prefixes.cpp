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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int l[n];
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
			if(l[i]==0)
			{
				v1.push_back(a[i]);
				v2.push_back(i);
			}
		}
		sort(v1.begin(),v1.end(),greater<int>());
		for(int i=0;i<v2.size();i++)
		{
			a[v2[i]]=v1[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
 } 
