#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int n;
	cin>>n;
	long long int a[n];
	long long int z=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			z++;
		}
	}
	vector<pair<long long int,long long int> >v;
    sort(a,a+n);
    long long int f=1;
    for(int i=1;i<n;i++)
    {
    	if(a[i]==a[i-1])
    	{
    		f++;
		}
		else{
			v.push_back(make_pair(a[i-1],f));
			f=1;
		}
			 if(i==n-1)
		{
			v.push_back(make_pair(a[i],f));
		}
	}
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i].first<<" "<<v[i].second<<endl;
//	}
long long int count=0;
    for(int i=0;i<v.size();i++)
    {
    	if(v[i].first==0)
    	{
    		count=count+(v[i].second*(v[i].second-1))/2;
		}
    	for(int j=i+1;j<v.size();j++)
    	{
    		if(abs(v[i].first)==v[j].first)
    		{
    			count=count+(v[i].second*v[j].second);
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
