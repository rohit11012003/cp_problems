#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int b=0;b<t;b++)
	{
		long long int n,k;
		cin>>n>>k;
		vector<long long int> odd;
		vector<long long int> even;
		long long int x,h;
		for(int i=0;i<k;i++)
		{
			even.push_back(2);
			odd.push_back(1);
			
		}
		int c=0;
		int d=0;
		if(2*k<=n)
		{
			if((n-(2*k))%2==0)
			{
				c=1;
		 h=2+n-(2*k);
				
			}
			
			
		}
		if(k<=n)
		{
			if((1+n-k)%2!=0)
			{
				d=1;
				
			 x=1+(n-k);
				
			}
		}
		if(c==0&&d==0)
		{
			cout<<"NO"<<endl;
		}
		else if(c==1&&d==1)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++)
			{
				cout<<even[i]<<" ";
			}
			cout<<h;
			cout<<endl;
		}
		else if(c==1)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++)
			{
				cout<<even[i]<<" ";
			}
			cout<<h;
			cout<<endl;
		}
		else if(d==1)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<k-1;i++)
			{
				cout<<odd[i]<<" ";
			}
			cout<<x;
			cout<<endl;
		}
		
		
	}
	return 0;
}
