#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int l,r;
	cin>>l>>r;
	long long int ans=0;
	if(r>100)
	{
		long long int z=r/100;
		ans=ans+(z-1)*10;
		z=z*100;
		cout<<z<<endl;
		for(long long int i=z+1;i<=r;i++)
		{
			stringstream str;
			str<<i;
			string s;
			str>>s;
			if(s[0]==s[s.size()-1])
			{
				ans++;
			}
		}
		//cout<<"hello"<<endl;
		if(l<100)
		{
			for(int i=l;i<=100;i++)
			{
				stringstream str;
			str<<i;
			string s;
			str>>s;
			if(s[0]==s[s.size()-1])
			{
				ans++;
			}
			}
		}
		else{
			long long int p=l/100;
			long long int count=0;
			count=count+(p-1)*10;
			p=p*100;
			for(long long int i=p;i<=l;i++)
			{
				stringstream str;
			str<<i;
			string s;
			str>>s;
			if(s[0]==s[s.size()-1])
			{
				count++;
			}	
			}
			ans=ans-count;
		}
		cout<<ans<<endl;
	}
	else{
		int ans=0;
		for(int i=l;i<=r;i++)
		{
			stringstream str;
			str<<i;
			string s;
			str>>s;
			if(s[0]==s[s.size()-1])
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	
}
