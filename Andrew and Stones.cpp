#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		vector<long long int> v;
		for(long long int i=0;i<n;i++)
		{
			long long int u;
			cin>>u;
			v.push_back(u);
		}
		int h=2;
		if(n==3&&v[1]%2!=0)
		{
			h=0;
		}
		else{
		
		for(int i=1;i<n-1;i++)
		{
			if(v[i]!=1)
			{
			h=1;
			break;	
			}
		}}
		if(h==0||h==2)
		{
			cout<<-1<<endl;
		}
		else{
			long long int count=0;
			for(int i=1;i<n-1;i++)
			{
				if(v[i]%2==0)
				{
					count=count+v[i]/2;
				}
				else{
					v[i]=v[i]+1;
					count=count+v[i]/2;
				}
			}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
