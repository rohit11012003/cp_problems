#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int sum=0;
		for(long long int j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum>100*(j-i+1))
			{
				
				v.push_back(j-i+1);
				
			}
		}
	}
	if(v.size()==0)
	{
		cout<<0<<endl;
		return 0;
	}
	sort(v.begin(),v.end(),greater<int>());
	cout<<v[0]<<endl;
	return 0;
}
