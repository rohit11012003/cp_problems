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
		int z=0;
		string ans=s;
		for(int k=0;k<n;k++)
		{
			string s1=s.substr(0,k);
			string s2=s.substr(k,n-k);
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
