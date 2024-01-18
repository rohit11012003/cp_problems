#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,b1;
	cin>>a1>>b1;
	int p=a1+b1;
	stringstream st1;
	stringstream st2;
	st1<<a1;
	st2<<b1;
	string a,b;
	st1>>a;
	st2>>b;
	int ma;
	for(int i=0;i<a.size();i++)
	{
		stringstream st;
		st<<a[i];
		int j;
		st>>j;
	//	cout<<j<<" ";
		if(i==0)
		{
		ma=j;	
		}
		else{
			if(ma<j)
			{
				ma=j;
			}
		}
	}
	cout<<endl;
		for(int i=0;i<b.size();i++)
	{
		stringstream st;
		st<<b[i];
		int j;
		st>>j;
		
	//cout<<j<<" ";
			if(ma<j)
			{
				ma=j;
			}
		
	}
	if(ma==1)
	{
		cout<<p<<endl;
	}
	else{
		ma=ma+1;
		if(ma==10)
		{
			stringstream str3;
			str3<<p;
			string s4;
			str3>>s4;
			cout<<s4.size()<<endl;
		}
		else{
			vector<int> v1;
			vector<int> v2;
			int q1=a1/ma;
			int r1=a1%ma;
			v1.push_back(r1);
			while(q1!=0)
			{
				q1=q1/ma;
				r1=q1%ma;
				v1.push_back(r1);
			}
			int q2=b1/ma;
			int r2=b1%ma;
			v2.push_back(r2);
			while(q2!=0)
			{
				q2=q2/ma;
				r2=q2%ma;
				v2.push_back(r2);
			}
			vector<int> ans;
		int carr=0;
		
		}
		
	}
}
