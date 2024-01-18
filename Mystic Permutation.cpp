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
		if(n==1)
		{
			cout<<-1<<endl;
		}
		else{
		
		vector<int>v;
		for(int i=1;i<=n;i++)
		{
			v.push_back(i);
		}
		vector<int> v1;
		int j=0;
	for(int i=0;i<n;i++)
	{
		if(v[j]!=a[i])
		{
			v1.push_back(v[j]);
			j++;
		}
		else {
			if(j<v.size()-1)
			{
			v1.push_back(v[j+1]);
			v.erase(v.begin()+j+1);
		}
		else{
			int z=v1[v1.size()-1];
			v1.erase(v1.begin()+v1.size()-1);
			v1.push_back(v[j]);
			v1.push_back(z);
			
		}
		
	}}
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	
	cout<<endl;	}
		
	}
	return 0;
}
