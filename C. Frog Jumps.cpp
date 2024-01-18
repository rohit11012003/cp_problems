#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int d=1;
		int n=s.size();
		int j;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='L')
			{
				int k=0;
				 j=i;
				while(s[j]=='L')
				{
					
					k++;
					j++;
					if(j==n)
					{
						i=j-1;
						break;
					}
				}
				i=j-1;
				d=max(k+1,d);
			}
			
		}
		cout<<d<<endl;
	}
	return 0;
}
