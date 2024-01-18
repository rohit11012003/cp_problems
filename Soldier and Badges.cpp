#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		v.push_back(j);
	}
	sort(v.begin(),v.end());
	int z;
	z=v[n-1]+1;
//	cout<<z<<endl;
	vector<int> v1;
	vector<int> v2;
	int j=1;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
		if(v[i]!=j)
		{
			
			v1.push_back(j);
			i--;
			j++;
		}
		else{
			j++;
		}
		}
		else{
			if(v[i]!=v[i-1])
			{
			if(v[i]!=j)
		{
			v1.push_back(j);
			i--;
			j++;
		}
		else{
			j++;
		}	
			}
		}
	}
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			v2.push_back(v[i]);
		}
	}
	long long int count=0;
	
//	for(int i=0;i<v1.size();i++)
//	{
//		cout<<v1[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<v2.size();i++)
//	{
//		cout<<v2[i]<<" ";
//	}
//	cout<<endl;
for(int i=0;i<v2.size();i++)
{
	if(v1.size()==0)
	{
		count=count+z-v2[i];
		z=z+1;
	}
	else{
	
	for(int j=0;j<v1.size();j++)
	{
		if(v1[j]>v2[i])
		{
			count=count+v1[j]-v2[i];
			v1.erase(v1.begin()+j);
			break;
		}
		else if(j==v1.size()-1)
		{
		
			count=count+z-v2[i];
			z=z+1;
		}
		
	}}
//	cout<<count<<" ";
}
cout<<count<<endl;
	return 0;
}
