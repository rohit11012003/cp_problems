#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int t=0;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				if(i==0||i==(n-1)||j==0||j==(m-1))
				{
					t=1;
				}
			}
		}
	}
	if(t==1)
	{
		cout<<2<<endl;
	}
	else {
		cout<<4<<endl;
	}
	return 0;
}
