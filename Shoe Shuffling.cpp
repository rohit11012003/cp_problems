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
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			int p=a[i];
			int k=0;
			for(int j=i;j<n;j++)
			{
			//	cout<<"hello"<<endl;
				if(a[j]==p)
				{
					k++;
				}
				else{
					v.push_back({p,k});
					i=j-1;
					break;
				}
				if(j==n-1)
				{
				//	cout<<"hello1"<<endl;
					v.push_back({j,k});
					i=j;
					break;
				}
			}
		}
		int h=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].second==1)
			{
				h=1;
				break;
			}
		}
		if(h==1)
		{
			cout<<-1<<endl;
		}
		else{
			int y;
			y=v[0].second;
			int j=1;
			int k=2;
			for(int i=1;i<v[0].second;i++)
			{
				cout<<k<<" ";
				k++;
			}
			cout<<j<<" ";
			for(int i=1;i<v.size();i++)
			{
				 j=y+1;
				k=j+1;
				for(int j=1;j<v[i].second;j++)
				{
					cout<<k<<" ";
					k++;
				}
				cout<<j<<" ";
				y+=v[i].second;
			}

		}
		cout<<endl;
		
	}
	return 0;
}
