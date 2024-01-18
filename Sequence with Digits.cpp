#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		unsigned long long int a,k;
		cin>>a>>k;
		int hv=0;
		for(long long int i=0;i<k-1;i++)
		{
			
			stringstream str;
			str<<a;
			string s;
			str>>s;
			int ma,mi;
			for(int i=0;i<s.size();i++)
			{
				stringstream st;
				st<<s[i];
				int g;
				st>>g;
				if(i==0)
				{
					ma=g;
					mi=g;
				}
				else{
					if(g>ma)
					{
						ma=g;
					}
					if(g<mi)
					{
						mi=g;
					}
				}}
				a=a+(ma*mi);
				stringstream su;
				su<<a;
				string se;
				su>>se;
				for(int c=0;c<se.size();c++)
				{
					if(se[c]==0)
					{
						hv=1;
						break;
					}
				}
				
				if(hv==1)
				{
					break;
				}
			} 
			cout<<a<<endl;
		}
		return 0;
	}

