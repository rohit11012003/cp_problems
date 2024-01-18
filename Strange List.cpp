#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int n,x;
		cin>>n>>x;
		vector<long long int> v;
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			v.push_back(a);
			sum=sum+a;
		}
		for(int i=0;i<v.size();i++)
		{
			if(v[i]%x!=0)
			{
				break;
			}
			else {
				long long int b=v[i]/x;
				for(int j=0;j<x;j++)
				{
					v.push_back(b);
					sum=sum+b;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
