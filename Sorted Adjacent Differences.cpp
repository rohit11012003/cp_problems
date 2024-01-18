#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int f=0;f<t;f++)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		vector<long long int> v;
		for(int i=0;i<=(n-1)/2;i++)
		{
			v.push_back(a[n-i-1]);
			if(n-i-1==i)
			{
				break;
			}
			else{
				v.push_back(a[i]);
			}
		}
		for(int i=0;i<n;i++)
		
		{
			cout<<v[n-1-i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
