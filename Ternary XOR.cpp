#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int m=0;m<t;m++)
	{
		long long int n;
		cin>>n;
	vector<int> a;
		vector<int> v1;
		vector<int> v2;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			stringstream str;
			str<<s[i];
			int t;
			str>>t;
			a.push_back(t);
		}
		int g=0;
		for(int i=0;i<n;i++)
		{
			if(g==0)
			{
				if(a[i]==2)
				{
					v1.push_back(1);
					v2.push_back(1);
				}
				else if(a[i]==0)
				{
					v1.push_back(0);
					v2.push_back(0);
				}
				else if(a[i]==1)
				{
					v1.push_back(1);
					v2.push_back(0);
					g=1;
				}
				
				
	}
	else if(g==1)
	{
	            if(a[i]==2)
				{
					v1.push_back(0);
					v2.push_back(2);
				}
				else if(a[i]==0)
				{
					v1.push_back(0);
					v2.push_back(0);
				}
				else if(a[i]==1)
				{
					v1.push_back(0);
					v2.push_back(1);
				}
		
	}}
	
	for(int i=0;i<n;i++)
	{
		cout<<v1[i];
	}
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<v2[i];
	}
	cout<<endl;
	}
	return 0;
}
