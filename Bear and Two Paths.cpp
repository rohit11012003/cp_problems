#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(n==4)
	{
		cout<<-1<<endl;
	}
	else if(k<n+1)
	{
		cout<<-1<<endl;
	}
	else{
		
		unordered_map<int, int> m;
		vector<int> v;
		v.push_back(a);
		v.push_back(c);
		m[a]=m[c]=1;
		for(int i=1;i<=n;i++)
		{
			if(m[i]==0&&i!=b&&i!=d)
			{
				v.push_back(i);
				m[1]=1;
			}
		}
		v.push_back(d);
		v.push_back(b);
		vector<int> v1;
		v1.push_back(c);
		v1.push_back(a);
		for(int i=2;i<=v.size()-3;i++)
		{
			v1.push_back(v[i]);
		}
		v1.push_back(b);
		v1.push_back(d);
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<v1.size();i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<endl;
	}
	
}
