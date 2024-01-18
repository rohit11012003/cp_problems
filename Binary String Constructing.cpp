#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x;
	cin>>a>>b>>x;
	vector<int> v;
	
	int t;
	if(a>=b)
	{
		t=0;
	}
	else{
		t=1;
	}
	for(int i=0;i<=x-1;i++)
	{
		if(t%2==0)
		{
			v.push_back(0);
			a--;
		}
		else{
			
			v.push_back(1);
			b--;
		
		}
		t++;
	}
	if(v[v.size()-1]==0)
	{
	
	for(int i=0;i<a;i++)
	{
		v.push_back(0);
	}
	for(int i=0;i<b;i++)
	{
		v.push_back(1);
	}}
	else{
		for(int i=0;i<b;i++)
	{
		v.push_back(1);
	}
	for(int i=0;i<a;i++)
	{
		v.push_back(0);
	}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;
	return 0;
	
	
}
