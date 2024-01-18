#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		long long int a=0;
		long long int b=0;
		if(n%2!=0)
		{
			cout<<"YES"<<endl;
		}
		else {
			for(int i=0;i<n;i++)
			{
				if(s[i]=='0')
				{
					a=a+1;
				}
				else if(s[i]=='1')
				{
					b=b+1;
				}
			}
			if(a%2==0&&b%2==0)
			{
				cout<<"YES"<<endl;
			}
			else if(a%2!=0&&b%2!=0)
			{
				if(a==b)
				{
					cout<<"YES"<<endl;
				}
				else if(a!=b)
				{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}

