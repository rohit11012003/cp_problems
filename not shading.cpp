#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int n,m,r,c;
		cin>>n>>m>>r>>c;
		char A[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>A[i][j];
			}
		}
		
		int z=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(A[i][j]=='B')
				{
					z=1;
					break;
				}
			}
		}
	
		int u=0;
		int y=0;
	for(int i=0;i<m;i++)
	{
		if(A[r-1][i]=='B')
		{
			u=1;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(A[i][c-1]=='B')
		{
			y=1;
			break;
		}
	}
	if(A[r-1][c-1]=='B')
		{
			cout<<"0"<<endl;
		}
		else if(z==0)
		{
			cout<<"-1"<<endl;
		}
	else if(u==1||y==1)
	{
		cout<<"1"<<endl;
	}
	else {
		cout<<"2"<<endl;
	}
		
	}
	return 0;
}
