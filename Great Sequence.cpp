#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long long int n,x;
		cin>>n>>x;
		vector<long long int>v;
		for(int i=0;i<n;i++)
		{
			long long int j;
			cin>>j;
			v.push_back(j);
		}
		sort(v.begin(),v.end());
		int b=0;
			for(int j=1;j<v.size();j++)
			{
				if(v[b]*x==v[j])
				{
					v.erase(v.begin()+b);
					v.erase(v.begin()+j-1);
					j=j-2;
				}
				else if(v[j]>v[b]*x)
				{
					b=b+1;
					j--;
				}
				if(j<=b)
				{
					j=b;
				}
			}
		cout<<v.size()<<endl;
	}
	return 0;
}
