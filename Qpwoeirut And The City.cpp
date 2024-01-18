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
		if(n%2==0)
		{
			long long int count1=0;
			long long int count2=0;
			int z=n/2;
			vector<long long int>  sum1;
			vector<long long int>  sum2;
			for(int i=1;i<n;i=i+2)
			{
				long long int z1=a[i+1]-a[i];
				long long int z2=a[i-1]-a[i];
				z1=max(z1,z2);
				if(z1>0)
				{
					count1=count1+z1+1;
				}
				else if(z1==0)
				{
					count1=count1+1;
				}
				sum1.push_back(count1);
			}
			for(int i=2;i<n;i=i+2)
			{
				long long int z1=a[i+1]-a[i];
				long long int z2=a[i-1]-a[i];
				z1=max(z1,z2);
				if(z1>0)
				{
					count2=count2+z1+1;
				}
				else if(z1==0)
				{
					count2=count2+1;
				}
				sum2.push_back(count2);
			}
		
		vector<long long int> v;
		for(int i=0;i<z-1;i++)
		{
			long long int ans=0;
			if(i!=0)
			{
				ans=ans+sum1[i-1];
			}
			if(i!=0)
			{
			ans+=sum2[z-2]-sum2[i-1];
		}
		if(i==0)
		{
			ans=sum2[z-2];
		}
		v.push_back(ans);
		}
//		for(int i=0;i<v.size();i++)
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
		v.push_back(sum1[z-2]);
	//	cout<<v[v.size()-1]<<endl;
		sort(v.begin(),v.end());
		cout<<v[0]<<endl;
	}
	else{
		long long int ans=0;
		for(int i=1;i<n;i=i+2)
		{
			long long int z1=a[i+1]-a[i];
			long long int z2=a[i-1]-a[i];
			z1=max(z1,z2);
			if(z1>0)
			{
				ans=ans+z1+1;
			}
			else if(z1==0)
			{
				ans=ans+1;
			}
		}
		cout<<ans<<endl;
	}
	
		
	}
	return 0;
}

