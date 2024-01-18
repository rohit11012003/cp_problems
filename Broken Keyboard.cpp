#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		string g;
		g.empty();
		string s;
		cin>>s;
		int n=s.size();
		int count=0;
		if(n==1)
		{
			cout<<s<<endl;
		}
		else 
		{
		
		for(int i=0;i<n;i++)
		{
			int t=1;
			for(int j=i+1;j<n;j++)
			{
				if(s[i]==s[j])
				{
					t++;
				}
				else {
					if(t%2==0){
			
			}
			else{
				g=g+s[i];
			}
					i=j;
					break;
				}
			}
			
		}
		cout<<g<<endl;}
		
	
	}
	return 0;
}
