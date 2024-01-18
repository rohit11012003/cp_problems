#include<bits/stdc++.h>
using namespace std;
int num[1001];
int main()
{
	vector<int> pri;
	
	for(int j=2;j<=1000;j++)
	{
		if(num[j]==0)
		{
			for(int i=j*2;i<=1000;i=i+j)
			{
				num[i]=1;
			}
		}
	}
//	cout<<"hello";
	for(int i=2;i<=1000;i++)
	{
		if(num[i]==0)
		{
			pri.push_back(i);
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int ans[n];
		for(int i=0;i<n;i++)
		{
			ans[i]=0;
		}
		
		int count=1;
		for(int i=0;i<pri.size();i++)
		{
			int z=0;
			for(int j=0;j<n;j++)
			{
				if(ans[j]==0)
				{
					if(b[j]%pri[i]==0)
					{
						z=1;
						ans[j]=count;
					}
				}
			}
			if(z==1)
			{
				count++;
			}
		}
		cout<<count-1<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
