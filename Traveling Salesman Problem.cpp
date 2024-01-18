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
		int a[n];
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		vector<int> v;
		if(a[n-1]>0)
		{
			v.push_back(a[n-1]);
		}
		if(a[0]<0)
		{
			v.push_back(abs(a[0]));
		}
		if(b[n-1]>0)
		{
			v.push_back(b[n-1]);
		}
		if(b[0]<0)
		{
			v.push_back(abs(b[0]));
		}
		if(v.size()==0)
		{
			cout<<0<<endl;
		}
		else{
			sort(v.begin(), v.end());
			int ans=0;
			for(int i=0;i<v.size();i++)
			{
				ans=ans+2*v[i];
			}
			
			cout<<ans<<endl;
		}
	}
}
