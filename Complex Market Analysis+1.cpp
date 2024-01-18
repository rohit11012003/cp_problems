#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
int pri[N];
int main()
{
	pri[0]=pri[1]=1;
	for(int i=2;i<1e6+7;i++)
	{
		if(pri[i]==1) continue;
		else{
			for(int j=2*i;j<1e6+7;j=j+i)
			{
				pri[j]=1;
			}
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
	int n,e;
	cin>>n>>e;
	long long int arr[n];
	int vis[n];
	for(int i=0;i<n;i++)
	{
		vis[i]=0;
	}
	vector<long long int> v;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			v.push_back(i);
		}
	}
	long long int count=0;
//	cout<<"checking prime "<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" "<<pri[arr[i]]<<endl;
//	}
	for(int i=0;i<n;i++)
	{
		if(pri[arr[i]]==0)
		{
			long long int count1=0;
			long long int count2=0;
			for(int j=i+e;j<n;j=j+e)
			{
				if(arr[j]==1)
				{
					count1++;
				}
				else{
					break;
				}
			}
			for(int j=i-e;j>=0;j=j-e)
			{
				if(arr[j]==1)
				{
					count2++;
				}
				else{
					break;
				}
			}
			if(count1==0||count2==0)
			{
				count=count+count1+count2;
			}
			else{
				count=count+(count1+1)*(count2+1)-1;
			}
		}
	}
	

	cout<<count<<endl;
}
}
