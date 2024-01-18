#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int n,k;
	cin>>n>>k;
	vector<int> v;
	
	
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		v.push_back(h);
	}
	
	if(k>=n)
	{
		cout<<n<<endl;
	}
	
	else {
		for(int j=0;j<n;j++)
		{
			if(v[j]>k)
			{
				if(v[j]==n)
				{
					cout<<n<<endl;
					return 0;
				}
			
				int count=0;
				if(j!=0)
				{
					count=count+1;
				}
				for(int i=0;i<j;i++)
				{
				
					v.push_back(v[i]);
				}
				if(j>0)
				{
					
					v.erase(v.begin(),v.begin()+j);
				}
				j=0;
			for(int i=j+1;i<v.size();i++)
			{
				if(v[j]>v[i])
				{
					count=count+1;
				}
				else {
					
					break;
				}
			}
			
			if(count>=k)
			{
				cout<<v[j]<<endl;
				return 0;
			}
			else{
				j=0;
			}
			
			}
		}
	}
	return 0;
}
