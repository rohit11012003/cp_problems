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
		for(int k=1;k<=n+1;k++)
		{
		string s1;
		string s2;
	//	cout<<k<<" "<<n<<endl;
			if(k%2!=0&&n%2!=0)
			{
			for(int i=k-2;i>=0;i-- )
			{
				s1+=s[i];
			}
			if(k-1!=n)
			{
			 s2=s.substr(k-1,n-k+1);	
			}
			
			}
			else if(k%2==0&&n%2==0)
			{
			for(int i=k-2;i>=0;i-- )
			{
				s1+=s[i];
			}
			if(k-1!=n)
			{
			 s2=s.substr(k-1,n-k+1);	
			}
			
			}
			else{
				if(k>1)
				{
				s1=s.substr(0,k-1);}
				s2=s.substr(k-1,n-k+1);
				
			}
			string ans1=s2+s1;
		//	cout<<ans1<<endl;
			if(ans1<ans)
			{
				ans=ans1;
				z=k+1;
			}
			
	}
		cout<<ans<<endl;
		if(z==1)
		{
			cout<<z<<endl;
		}
		else{
			cout<<z-1<<endl;
		}
	
}
}

