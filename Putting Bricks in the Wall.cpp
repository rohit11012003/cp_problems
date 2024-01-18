#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n;
		cin>>n;
		char a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		if(a[0][1]==a[1][0])
		{
			if(a[n-2][n-1]==a[n-1][n-2])
			{
				if(a[0][1]==a[n-2][n-1])
				{
					cout<<2<<endl;
					cout<<n-1<<" "<<n<<endl;
					cout<<n<<" "<<n-1<<endl;
				}
				else if(a[0][1]!=a[n-2][n-1])
				{
					cout<<0<<endl;
				}
			}
			else if(a[n-2][n-1]!=a[n-1][n-2])
			{
				if(a[n-2][n-1]==a[0][1])
				{
					cout<<1<<endl;
					cout<<n-1<<" "<<n<<endl;
				}
				else {
					cout<<1<<endl;
					cout<<n<<" "<<n-1<<endl;
				}
			}
		}
		else if(a[n-2][n-1]==a[n-1][n-2])
		{
			if(a[0][1]==a[n-2][n-1])
			{
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(a[1][0]==a[n-2][n-1]) {
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
		}
		else if(a[n-2][n-1]!=a[n-1][n-2])
		{
			if(a[0][1]==a[n-2][n-1])
			{
				cout<<2<<endl;
				cout<<2<<" "<<1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else {
				cout<<2<<endl;
				cout<<2<<" "<<1<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
		}
	}
	return 0;
}
