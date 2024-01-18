#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int mi,ma;
	vector<long long int> v;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		if(i==0)
		{
			ma=b[0];
			mi=a[0];
			v.push_back(0);
		}
		else {
			if(b[i]>ma)
			{
				ma=b[i];
			}
			if(a[i]<mi)
			{
				v.clear();
				mi=a[i];
				v.push_back(i);
			}
			else if(a[i]==mi)
			{
				v.push_back(i);
			}
		}}
		int t=0;
		for(int i=0;i<v.size();i++)
		{
			if(b[v[i]]==ma)
			{
				cout<<v[i]+1;
				t=1;
				break;
			}
		}
		if(t==0)
		{
			cout<<-1<<endl;
		}
	return 0;
}
