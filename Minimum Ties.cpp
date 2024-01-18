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
		if(n%2==0)
		{
			for(int j=1;j<n;j++)
			{
				int k=j+1;
				if(j%2!=0)
				{
					cout<<0<<" ";
					k++;
				}
				for(k;k<=n;k++)
				{
					if((k-j)%2==0)
					{
						cout<<1<<" ";
					}
					else{
						cout<<-1<<" ";
					}
				}
			}
		}
		else{
			for(int j=1;j<n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					if((k-j)%2==0)
					{
						cout<<-1<<" ";
					}
					else{
						cout<<1<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
