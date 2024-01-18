#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
vector<int> ans;
	
	for(int i=0;i<n;i++)
	{
		int count=0;
		vector<int> v;
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				count++;
			}
			else{
				v.push_back(count);
				count=0;
			}
		}
		v.push_back(count);
		sort(v.begin(),v.end());
		ans.push_back(v[v.size()-1]);
	}

	while(q--)
	{
		int a1,b1;
		cin>>a1>>b1;
		a1--;
		b1--;
		
		if(a[a1][b1]==1)
		{
			a[a1][b1]=0;
		}
		else{
			a[a1][b1]=1;
		}
		
		int z=0;
		vector<int> v1;
		for(int i=0;i<m;i++)
		{
			if(a[a1][i]==1)
			{
				z++;
			}
			else{
				v1.push_back(z);
				z=0;
			}
		}
		v1.push_back(z);
		sort(v1.begin(),v1.end());
		ans[a1]=v1[v1.size()-1];
		int ma=0;
		for(int i=0;i<n;i++)
		{
			if(ma<ans[i])
			{
				ma=ans[i];
			}
		}
		cout<<ma<<endl;
		
	}
	return 0;
}
