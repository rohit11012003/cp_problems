#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<pair< long long int ,int> > v;
	for(int i=0;i<n;i++)
	{
		long long int count=0;
		long long int x,y;
		for(int j=i;j>=0;j--)
		{
			if(j==i)
			{
				count=count+a[i];
				x=a[i];
			}
			else{
				if(a[j]>=x)
				{
					count=count+x;
				}
				else{
					count=count+a[j];
					x=a[j];
				}
			}
		}
		for(int j=i;j<n;j++)
		{
			if(j==i)
			{
				y=a[i];
			}
			else{
				if(a[j]>=y)
				{
					count=count+y;
				}
				else{
					count=count+a[j];
					y=a[j];
				}
			}
		}
		v.push_back({count,i});
	}

	sort(v.begin(),v.end());
	int ind=v[v.size()-1].second;
	//cout<<ind<<endl;
	int ans[n];
	long long int x=0,y=0;
	for(int i=ind;i<n;i++)
	{
		if(i==ind)
		{
		
			ans[i]=a[i];
			x=a[i];
		}
		else{
			if(a[i]>=x)
			{
				
				ans[i]=x;
			}
			else{
				
				ans[i]=a[i];
				x=a[i];
			}
		}
	}
	
	//long long int y;
	for(int i=ind;i>=0;i--)
	{
		if(i==ind)
		{
			y=ans[i];
		}
		else{
			if(a[i]>=y)
			{
				ans[i]=y;
			}
			else{
				ans[i]=a[i];
				y=a[i];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
