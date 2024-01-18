#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int z=1;
		string ans=s;
		for(int k=0;k<=n;k++)
		{
		string s1;
		string s2;
			if(k+1%2!=0&&n%2==0)
			{
				
			
			
			for(int i=k-1;i>=0;i-- )
			{
				s1+=s[i];
			}
			
			if(k!=n)
			{
			 s2=s.substr(k,n-k);	
			}}
			else if(k+1%2==0&&n%2!=0)
			{
				
			for(int i=k-1;i>=0;i-- )
			{
				s1+=s[i];
			}
			
			if(k!=n)
			{
			 s2=s.substr(k,n-k);	
			}
			}
			else {
				s1=s.substr(0,k-1);
				s2=s.substr(k,n-k);
			}
			
			string ans1=s2+s1;
			if(ans1<ans)
			{
				ans=ans1;
				z=k+1;
			}
		}
		cout<<ans<<endl;
		cout<<z<<endl;
	}
	return 0;
}
