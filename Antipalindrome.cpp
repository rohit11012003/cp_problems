#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int d=0;
	int count=0;
	for(int i=1;i<s.size();i++)
	{
		if(s[0]!=s[i])
		{
			d=1;
		}
	}
	if(s.size()==1){
		cout<<0<<endl;
	}
	else if(d==0)
	{
		cout<<0<<endl;
	}
else {
	for(int i=2;i<=s.size();i++)
	{
		for(int j=0;j<s.size()-i+1;j++)
		{
			int m=0;
			string g=s.substr(j,i);
			for(int l=0;l<i/2;l++)
			{
				int q=s[l];
				int z=s[i-1-l];
				if(q!=z)
				{
					m=1;
					break;
				}
		}
			if(m==1)
			{
				count=i;
				break;
			}
		}
	}
	cout<<count<<endl;}
	return 0;
}
