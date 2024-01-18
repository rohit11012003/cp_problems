#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int n;
		cin>>n;
		vector<int> v;
		for(long long int i=0;i<n;t++)
		{
			long long int c;
			cin>>c;
			v.push_back(c);
		}
		vector<int> v1;
		long long int v2;
		long long int m1,m2;
		sort(v.begin(),v.end());
		for(long long i=0;i<n;i++)
		{
			long long int x=v[i];
			long long int b=0;
			int g=1;
			while(v[g]==x)
			{
				b=b+1;
			}
			if(i==0)
			{
				m1=b;
				m2=b;
			}
			
		}
	}
	
}
