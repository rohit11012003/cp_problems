#include<bits/stdc++.h>
using namespace std;
struct arr{
	int ind;
	int likes;
	int last;
};
int main()
{
	vector<arr> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			int t;
			cin>>t;
			arr s;
			s.ind=t;
			s.likes=0;
			s.likes=s.likes+1;
			s.last=i;
			v.push_back(s);
			cout<<v[0].ind<<endl;
		}
		else {
			int t;
			int e=0;
			cin>>t;
			for(int j=0;j<v.size();j++)
			{
				if(v[j].ind==t)
				{
					v[j].likes=v[j].likes+1;
					v[j].last=i;
					e=1;
				}
			}
			if(e==0)
			{
				arr s;
				s.ind=t;
				s.likes=0;
			s.likes=s.likes+1;
			s.last=i;
			v.push_back(s);
		}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		
		cout<<v[i].ind<<"  "<<v[i].likes<<"  "<<v[i].last<<endl;
	}
	int u=v[0].ind;
	int l=v[0].likes;
	int y=v[0].last;
	for(int i=1;i<v.size();i++)
	{
		if(v[i].likes>l)
		{
			l=v[i].likes;
			u=v[i].ind;
			y=v[i].last;
		}
		else if(v[i].likes==l)
		{
			if(v[i].last<y)
			{
			l=v[i].likes;
			u=v[i].ind;
			y=v[i].last;
			}
		}
	}
	cout<<u<<endl;
	return 0;
	
}
