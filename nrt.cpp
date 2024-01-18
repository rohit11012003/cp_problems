#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='2')
			{
				a++;
			}
		}
		if(a*(a-1)/2<a)
		{
			cout<<"NO"<<endl;
		}
		else{
			int t=0;
			int h=0;
			int n=s.size();
			for(int i=0;i<n;i++)
			{
				if(s[i]=='2')
				{
					t++;
				}
				for(int j=0;j<n;j++)
				{
					if(i==j)
					{
						cout<<"X";
					}
				else if(s[i]=='1')
					{
						cout<<"=";
					}
					else if (s[j]=='1')
					{
						cout<<"=";
					}
					else if(s[i]=='2'&&s[j]=='2')
					{
						int b=0;
						if(t==a&&b==0)
						{
							cout<<"+";
							b=1;
						}
					else{
						if(h==0&&j>i)
						{
							cout<<"+";
							h=1;
						}
						else {
						cout<<"-";}
					}}
				}
				cout<<endl;
			}
		}
	}
}