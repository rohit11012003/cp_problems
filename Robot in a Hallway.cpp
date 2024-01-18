#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int vis[2][N];
int a[2][N];
void fun( int ind)
{
	int p;
	if(vis[0][ind-1]<=a[0][ind])
	{
		vis[0][ind]=a[0][ind]+1;
		if(vis[1][ind-1]<=a[1][ind])
		{
			vis[1][ind]=a[1][ind]+1;
		}
		else{
			vis[1][ind]=min(vis[0][ind]+1,vis[1][ind-1]+1);
		}
	}
	else{
		if(vis[1][ind-1]<=a[1][ind])
		{
			vis[1][ind]=a[1][ind-1]+1;
			vis[0][ind]=min(vis[1][ind]+1,vis[0][ind-1]+1);
		}
		else{
			vis[0][ind]=min(vis[0][ind-1]+1, vis[1][ind-1]+2);
			vis[1][ind]=min(vis[0][ind-1]+2, vis[1][ind-1]+1);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		int a[2][m];
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				vis[i][j]=-1;
			}
		}
		vis[0][0]=0;
		vis[1][0]=a[1][0]+1;
		for(int i=1;i<=m-1;i++)
		{
			fun(i);
		}
		cout<<vis[1][m-1]<<endl;
	}
}
