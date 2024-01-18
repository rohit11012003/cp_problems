#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int count=0;
	for(int i=1;i<=1e5;i++)
	{
		long long int p=pow(i,3);
		stringstream str;
		string s;
		int z=0;
		int z1=0;
		stringstream st;
		string s1;
		st>>p;
		st>>s1;
		if(s1.size()>=2)
		{
			if(s1[s1.size()-1]=='1'&&s1[s1.size()-2]=='1')
			{
				z=1;
			}
		}
		str<<i;
		str>>s;
		if(s.size()>=2)
		{
			if(s[s.size()-1]=='1'&&s[s.size()-2]=='1')
			{
				z1=1;
			}
		}
		if(z==1&&z1==1)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
