#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	vector<string>v2;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v2.push_back(s);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			stringstream s;
			s<<v2[i][j];
			int f;
			s>>f;
			a[i][j]=f;
		}
	}

	vector<int>v;
	for(int i=0;i<m;i++)
	{
		int t=0;
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[j][i]==1)
			{
				count++;
			}
			if(count==2)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			v.push_back(i);
		}
		
	}
	
	if(v.size()<n)
	{
		cout<<"YES"<<endl;
	}
	else {
	
		vector<int>v1;
		for(int i=0;i<v.size();i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[j][v[i]]==1)
				{
					v1.push_back(j);
					break;
				}
			}
		}
	
		
		sort(v1.begin(),v1.end());
		long long int count=1;
		for(int i=1;i<v1.size();i++)
		{
			if(v1[i]!=v1[i-1])
			{
				count++;
			}
		}
	//	cout<<"count is "<<count<<endl;
		if(count==n)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
	
}
