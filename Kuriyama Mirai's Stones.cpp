#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int> v1;
	vector<long long int> v2;
	for(long long int i=0;i<n;i++)
	{
		long long int t;
		cin>>t;
		v1.push_back(t);
	}
	v2=v1;
	sort(v2.begin(),v2.end());
	vector< pair <long long int, long long int> >sum1;
	vector< pair <long long int, long long int> >sum2;
	long long int su1=0;
	long long int su2=0;
	for(int i=0;i<n;i++)
	{
		su1=su1+v1[i];
		sum1.push_back(make_pair(i+1,su1));
	}
	for(int i=0;i<n;i++)
	{
		su2=su2+v2[i];
		sum2.push_back(make_pair(i+1,su2));
	}
	long long int m;
	cin>>m;
	for(long long int i=0;i<m;i++)
	{
		long long int a,l,r;
		cin>>a>>l>>r;
		if(a==1)
		{
			cout<<sum1[r-1].second-sum1[l-1].second+v1[l-1]<<endl;;
			
		}
		else if(a==2)
		{
			cout<<sum2[r-1].second-sum2[l-1].second+v2[l-1]<<endl;;
		}
	}
	return 0;
	
}
