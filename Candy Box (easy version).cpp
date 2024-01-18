#include<bits/stdc++.h>
using namespace std;
int v[200005];
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			v[a]++;
		}
		sort(v,v+200005,greater<int>());
		int p;
//		for(int i=0;i<=n;i++)
//		{
//			cout<<v[i]<<" ";
//		}
		long long int count=0;
		for(int i=0;i<=n;i++)
		{
			if(i==0)
			{
				count=count+v[0];
				p=v[0]-1;
			}
			else{
				if(p<=0)
				{
					break;
				}
				if(v[i]<=p)
				{
					count=count+v[i];
					p=v[i]-1;
					if(p<=0)
					{
						break;
					}
				}
				else{
					if(v[i]>p)
					{
						count=count+p;
						p=p-1;
					}
				}
			}
			if(p<=0)
			{
				break;
			}
			if(v[i]==0)
			{
				break;
			}
			
		}
		for(int i=0;i<=n;i++)
		{
			if(v[i]==0)
			{
				break;
			}
			v[i]=0;
		}
		cout<<count<<endl;
	}
	return 0;
}
