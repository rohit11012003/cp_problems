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
//	cout<<"checking prime "<<endl;
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" "<<pri[arr[i]]<<endl;
//	}
	unordered_map<int,int> m;
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	long long int count=0;
	for(int f=0;f<v.size();f++)
	{
	//cout<<"hello";
		if(m[v[f]]==1) continue;
		else{
			//cout<<"hello1";
			int ind;
			int fl=0;
			int count1=0;
			//cout<<" "<<v[f]<<endl;
			for(int i=v[f];i<n;i=i+e)
			{
				if(arr[i]==1)
				{
					count1++;
					m[i]=m[i]+1;
				}
				else{
					ind=i;
					fl=1;
					break;
				}
				//cout<<"hello2"<<endl;
			}
			if(fl==1)
			{
			if(pri[arr[ind]]==0)
			{
				count=count+count1;
			}}
			
		}
	}
	
	
	unordered_map<int,int> m2;
	for(int i=0;i<n;i++)
	{
		if(pri[arr[i]]==0)
		{
			int count2=0;
			for(int j=i+e;j<n;j=j+e)
			{
				if(arr[j]==1)
				{
					count2++;
				}
			}
			count=count+count2;
		}
	}
	cout<<"ans is "<<count<<endl;
	
}
}
