#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int count=0;
		int b;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				count++;
				b=i;
				break;
			}
			
		}
		int c;
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='*')
			{
				c=i;
				break;
			}
		}
		if(c==b)
		{
		
		}
		else {
			int it=b;
			while(it!=c)
			{
				it=it+k+1;
				if(it>s.size()-1)
				{
					it=s.size()-1;
				}
				if(s[it]=='*')
				{
					count++;
				}
				else {
					for(int it;;it--)
					{
						if(s[it]=='*')
						{
							count++;
							break;
						}
					}
				}
			}
		}
		cout<<count<<endl;
	}
}
