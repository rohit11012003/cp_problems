#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		vector<long long int > v;
		if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
			{
				v.push_back(a[i]);
				v.push_back(a[n-1-i]);
			}
		}
		else{
			for(int i=0;i<n/2;i++)
			{
				v.push_back(a[i]);
				v.push_back(a[n-1-i]);
			}
			v.push_back(a[n/2]);
		}
//		for(int i=0;i<n;i++)
//			{
//				cout<<v[i]<<" ";
//			}
		if(v[n-1]>v[n-2])
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
