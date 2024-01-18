#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int> >v;
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		v.push_back(make_pair(c,i));
	}
	long long int sum=0;
	sort(v.begin(),v.end());
	vector<int>a;
	for(int i=n-k;i<n;i++)
	{
		sum=sum+v[i].first;
		a.push_back(v[i].second);
	}
	sort(a.begin(),a.end());
	
	cout<<sum<<endl;
	if(k==1)
	{
		cout<<n<<endl;
	}
	else
	{
		
	
	for(int i=0;i<k;i++)
	{
		if(i==0)
		{
			cout<<a[0]+1<<" ";
		}
		else if(i==k-1)
		{
			cout<<n-1-a[k-2]<<" ";
		}
		else {
			cout<<a[i]-a[i-1]<<" ";
		}
	}}
	return 0;
}
