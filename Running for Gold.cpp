#include<bits/stdc++.h>
using namespace std;
const int N=50005;
vector<int> v[N];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<5;j++)
			{
				int a;
				cin>>a;
				v[i].push_back(a);
			}
		}
		vector<int> ans=v[1];
		int ind=1;
		for(int i=2;i<=n;i++)
		{
			int t1=0;
			int t2=0;
			for(int j=0;j<5;j++)
			{
				if(v[i][j]<ans[j])
				{
					t1++;
				}
				else{
					t2++;
				}
				//cout<<v[i][j]<<" "<<ans[j]<<endl;
				
			}
			if(t1>t2)
				{
					ans=v[i];
					ind =i;
				}
		}
		int p=0;
		for(int i=1;i<=n;i++)
		{
			if(i!=ind)
			{
				int t1=0;
				int t2=0;
				for(int j=0;j<5;j++)
				{
					if(v[i][j]<ans[j])
					{
						t1++;
					}
					else{
						t2++;
					}
				}
				if(t1>t2)
				{
					p=1;
					break;
				}
			}
		}
		if(p==0)
		{
			cout<<ind<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		for(int i=1;i<=n;i++)
		{
			v[i].clear();
		}
	}
}
