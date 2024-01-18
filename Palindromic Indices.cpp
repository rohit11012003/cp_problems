#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		string s;
		cin>>s;
		int h=0;
		for(int i=0;i<n-1;i++)
		{
			if(s[i]!=s[i+1])
			{
				h=1;
				break;
			}
		}
		long long int count ;
		if(n%2!=0)
		{
			count=0;
			for(int i=n/2;i>0;i--)
			{
				if(s[i-1]!=s[i])
				{
					break;
				}
				count++;
			}
			count=2*count;
			count++;
		}
		else {
			count=0;
			for(int i=(n-1)/2;i>0;i--)
			
			{
			
			     
				if(s[i-1]!=s[i])
				{
					break;
				}
				count++;
			}
	
			count=count*2;
			count=count+2;
		}
		if(h==0)
		{
			cout<<n<<endl;
		}
		else{
			cout<<count<<endl;
		}
	}
	return 0;
}
