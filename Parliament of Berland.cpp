#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v=1;
	int n,a,b;
	int c=0;
	cin>>n>>a>>b;
	if(n>(a*b))
	{
		cout<<-1<<endl;
		return 0;
	}
	else {
		if(b%2!=0)
		{
			int t=0;
			for(int i=1;i<=(a*b);i++)
			{
				if(i<=n)
				{
				cout<<i<<" ";
				t++;
				if(t==b)
				{
					cout<<endl;
					t=0;
				}}
				else {
					cout<<0<<" ";
					t++;
					if(t==b)
					{
						cout<<endl;
						t=0;
					}
				}
			}
		}
		else {
			int t=0;
			for(int i=1;i<=(a*b);i++)
			if(i<=n)
			{
			
			if(c%2==0)
			{
			    cout<<i<<" ";
				t++;
				if(t==b)
				{
					cout<<endl;
					t=0;c++;
					v=1;
				}
			
			
			}
			else {
				
				cout<<b+i-(2*v-1)<<" ";
				v++;
				t++;
				if(t==b)
				{
					cout<<endl;
					t=0;
					c++;
				}
			}}
			else {
				cout<<0<<" ";
				t++;
				if(t==b)
				{
					cout<<endl;
					t=0;
				}
			}
		}
			}
		}
		
