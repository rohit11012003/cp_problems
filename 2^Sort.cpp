#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> v;
		for(int i=1;i<n;i++)
		{
			if(2*a[i]<=a[i-1])
			{
				v.push_back(i);
			}
		}
		if(v.size()==0)
		{
			//cout<<"hello";
			cout<<n-k<<endl;
		}
		else{
			int count=0;
			for(int i=0;i<v.size();i++)
			{
				if(i==0)
				{
					//cout<<v[i]<<endl;
					if(v[i]-1>=k)
					{
						count=count+v[i]-1-k+1;
					}
					//cout<<"value of count is "<<count<<endl;
				}
				else{
					if(v[i]-v[i-1]>=k+1)
					{
						count=count+v[i]-v[i-1]-k;
					}
				}
			}
			int z=v.size()-1;
			if(n-v[z]>=k+1)
			{
				count=count+n-1-v[z]-k+1;
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
