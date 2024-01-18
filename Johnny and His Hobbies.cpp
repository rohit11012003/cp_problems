#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
		int h;
		cin>>h;
		v.push_back(h);
		}
		if(n%2!=0)
		{
			cout<<-1<<endl;
		}
		else{
		
		sort(v.begin(),v.end());
		int diff;
		int po;
		for(int i=0;i<n-i;i++)
		{
			if(i==0)
			{
				diff=v[i+1]-v[i];
				po=i;
			}
			else{
				if(v[i+1]-v[i]>diff)
				{
					diff=v[i+1]-v[i];
					po=i;
				}
			}
			
			
		}
		v.erase(v.begin()+po);
		v.erase(v.begin()+po);
		int b=0;
		for(int i=0;i<v.size();i++)
		{
			for(int j=i+1;j<v.size();j++)
			{
				if(v[j]-v[i]>diff)
				{
					b=1;
					break;
				}
				else if(j==v.size()-1)
				{
					if(v[j]-v[i]<diff)
					{
						b=1;
						break;
					}
				}
				else {
					if(v[j]-v[i]==diff)
					{
						v.erase(v.begin()+i);
						v.erase(v.begin()+j-1);
						i=i-1;
						break;
					}
				}
			}
			if(b==1)
			{
				break;
			}
		}
		if(b==0)
		{
			cout<<diff<<endl;
		}
		else{
			cout<<-1<<endl;
		}
		
	}}
	return 0;
}
