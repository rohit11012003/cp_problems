#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long int x;
		cin>>x;
		string s;
		cin>>s;
		int a=0;int b=0;int d=0;;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='C')
			{
				a=a+1;
			}
			else if(s[i]=='N')
			{
				b=b+1;
			}
			else if(s[i]=='D')
			{
				d=d+1;
			}
		}
		if(a>b)
		{
			cout<<(60*x)<<endl;
		}
		else if(b>a)
		{
			cout<<(40*x)<<endl;
		}
		else if(a=b)
		{
			cout<<(55*x)<<endl;
		}
	}
	return 0;
}
