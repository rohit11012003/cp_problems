#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	string t;
	cin>>n>>k;
	cin>>t;
	vector<int> v;
	int y=0;
	for(int i=t.size()-1;i>=0;i--)
	{
		if(t[i]==t[0])
		{
		 v.push_back(i);
			
		}
	}
	if(v.size()==1)
	{
		for(int i=0;i<k;i++)
		{
			cout<<t;
		}
		cout<<endl;
	}
	else{
	//	cout<<"GDd";
	sort(v.begin(),v.end());
		int ind;
		int h=0;
		//cout<<y<<endl;
		int x;
		for(int i=1;i<v.size();i++)
		{
			
			int u=0;
			int p=0;
		for(int j=v[i];j<t.size();j++)
		{
			if(t[p]!=t[j])
			{
				u=1;
				break;
			}
			else{
				p++;
			}
			
		}
		if(u==0)
		{
			h=1;
			ind=v[i];
			x=p;
			break;
		}
		
		}
		//cout<<h<<endl;
		if(h==0)
		{
			for(int i=0;i<k;i++)
			{
				cout<<t;
			}
			cout<<endl;
		}
		else{
		//	cout<<"HELLO";
			cout<<t;
			string s;
			for(int j=x;j<t.size();j++)
			{
				s=s+t[j];
			}
			for(int i=0;i<k-1;i++)
			{
				cout<<s;
			}
			cout<<endl;
		}
	}
	return 0;
}
