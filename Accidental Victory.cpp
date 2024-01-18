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
		vector<pair<long long int ,int > > v;
		long long int sum[n];
		for(int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			v.push_back({a,i});
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				sum[i]=v[i].first;
			}
			else{
				sum[i]=sum[i-1]+v[i].first;
			}
		}
	    int z=-1;
//	    for(int i=0;i<n;i++)
//	    {
//	    	cout<<sum[i]<<" ";
//		}
		for(int i=0;i<n-1;i++)
		{
			if(sum[i]<(sum[i+1]-sum[i]))
			{
				z=i;
			}
		}
	//	cout<<"value of z is "<<z<<endl;
		if(z==-1)
		{
		cout<<n<<endl;
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else{
		vector<int> v1;
		for(int i=z+1;i<n;i++)
		{
			v1.push_back(v[i].second+1);
		}
		if(v1.size()==0)
		{
			cout<<0<<endl;
		}
		else{
			cout<<v1.size()<<endl;
			sort(v1.begin(),v1.end());
			for(int i=0;i<v1.size();i++)
			{
				cout<<v1[i]<<" ";
			}
			cout<<endl;
		}
	}
}
	return 0;
}
