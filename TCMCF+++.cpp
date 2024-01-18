#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a>0)
		
		{
			v1.push_back(a);
		}
		else if (a<0)
		{
			v2.push_back(a);
		}
		else if(a==0)
		{
			v3.push_back(a);
		}
	}
	if(v1.size()>0)
	{
		for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<" ";
		}
		if(v2.size()!=0)
		{
			if(v2.size()%2==0)
			{
			for(int i=0;i<v2.size();i++)
			{
				cout<<v2[i]<<" ";
			}}
			else{
				sort(v2.begin(),v2.end());
				{
					for(int i=0;i<v2.size()-1;i++)
					{
						cout<<v2[i]<<" ";
					}
				}
			}
		}
	}
	else {
		if(v2.size()==0)
		{
			cout<<0<<endl;
		}
		else if(v2.size()==1&&v3.size()==0)
		{
			cout<<v2[0]<<endl;
		}
		else if(v2.size()==1&&v3.size()!=0)
		{
			cout<<0<<endl;
		}
		else {
			if(v2.size()%2==0)
			{
			
			for(int i=0;i<v2.size();i++)
			{
				cout<<v2[i]<<" ";
			}}
			else{
				sort(v2.begin(),v2.end());
				{
					for(int i=0;i<v2.size()-1;i++)
					{
						cout<<v2[i]<<" ";
					}
				}
			}
		
		}
	}
	return 0;
	
}
