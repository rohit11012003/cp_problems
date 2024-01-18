#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b;
	cin>>n>>b;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> v;
	if(n==1)
	{
		cout<<b<<endl;
	}
	else{
		
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			
			//	cout<<a[i]<<" "<<a[j]<<endl;
				int count;
				int y=b/a[i];
				count=b%a[i];
				count=count+(y*a[j]);
				v.push_back(count);
			
		}
	}
	sort(v.begin(),v.end(),greater<int>());
	if(v[0]<b)
	{
		cout<<b<<endl;
	}
	else {
		
		cout<<v[0]<<endl;
	}}
	return 0;
}
