#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		long long int n,k;
		cin>>n>>k;
		long long int h[n];
		for(int i=0;i<n;i++)
		{
			cin>>h[i];
		}
		int t=0;
		int a=0;
		for(long long int i=0;i<n-1;i++)
		{
			if(h[i]<h[i+1])
			{
				k--;
				h[i]=h[i]+1;
				if(k==0)
				{
					a=1;
					t=i;
					break;
				}
				if(i==0)
				{
					i=-1;
				}
				else{
					i=i-2;
				}
			}
		}
		if(a==0)
		{
			cout<<-1<<endl;
		}
		else {
			cout<<t+1<<endl;
		}
	}
}
