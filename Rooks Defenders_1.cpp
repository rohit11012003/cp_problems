#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	unordered_map<int,int> m1;
	unordered_map<int,int> m2;
	set<int> s1;
	set<int> s2;
	for(int i=1;i<=n;i++)
	{
		s1.insert(i);
	}
	for(int i=1;i<=n;i++)
	{
		s2.insert(i);
	}
	
	while(q--)
	{
	int t;
	cin>>t;
	if(t==1)
	{
		int x,y;
		cin>>x>>y;
		m1[x]=m1[x]+1;
		m2[y]=m2[y]+1;
		auto it1=s1.find(x);
		auto it2=s2.find(y);
		if(it1!=s1.end())
		{
			s1.erase(it1);
		}
		if(it2!=s2.end())
		{
			s2.erase(it2);
		}
	}
	if(t==2)
	{
		int x,y;
		cin>>x>>y;
		m1[x]=m1[x]-1;
		m2[y]=m2[y]-1;
		if(m1[x]==0)
		{
			m1.erase(x);
			auto it1=s1.find(x);
			if(it1==s1.end())
			{
				s1.insert(x);
			}
			
		}
		if(m2[y]==0)
		{
			m2.erase(y);
			auto it2=s2.find(y);
			if(it2==s2.end())
			{
				s2.insert(y);
			}
			
		}
	}
	if(t==3)
	{
//		cout<<"value in s1 are"<<endl;
//		for(auto it=s1.begin();it!=s1.end();it++)
//		{
//			cout<<*it<<" ";
//		}
//		cout<<endl;
//		cout<<"value in s2 are "<<endl;
//		for(auto it=s2.begin();it!=s2.end();it++)
//		{
//			cout<<*it<<" ";
//		}
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		int z1=0;
		int z2=0;
		auto it1=s1.lower_bound(x1);
		auto it2=s1.lower_bound(x2);
		auto it3=s2.lower_bound(y1);
		auto it4=s2.lower_bound(y2);
		if(x1!=x2)
		{
			if(it1==it2&&*it2!=x2)
			{
				z1=1;
			}
		}
		else{
			if(*it1!=x1)
			{
				z1=1;
			}
		}
		if(y1!=y2)
		{
			if(it3==it4&&*it3!=y2)
			{
				z2=1;
			}
		}
		else{
			if(*it3!=y1)
			{
				z2=1;
			}
		}
		if(z1==1||z2==1)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
return 0;
}
