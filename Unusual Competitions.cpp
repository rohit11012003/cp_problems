#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0;
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')
		{
			a++;
		}
		else{
			b++;
		}
	}
	if(a!=b)
	{
		cout<<-1<<endl;
	}
	else{
		a=0;
		b=0;
		vector<int> v;
		int t=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='(')
		{
			a++;
		}
		else{
			b++;
		}
		if(b>a)
		{
			t++;
		}
		else if(b==a)
		{
			v.push_back(t);
			t=0;
		}
		}
//		for(int i=0;i<v.size();i++)
//		{
//			cout<<v[i]<<" ";
//		}
		long long int count=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]!=0)
			{
				count=count+1+v[i];
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
