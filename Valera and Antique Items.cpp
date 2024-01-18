#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,v;
	cin>>n>>v;
	vector<int>b;
	int count=0;
	for(int i=0;i<n;i++)
	{
	
		int k;
		cin>>k;
		long long int  a[k];
		for(int j=0;j<k;j++)
		{
			cin>>a[j];
		}
	sort(a,a+k);
		if(v>a[0])
		{
			count++;
			b.push_back(i+1);
		}
	}
	cout<<count<<endl;
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
