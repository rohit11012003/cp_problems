#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long long int a[n][m];
		long long int ma;
		int x1,y1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(i==0&&j==0)
				{
					ma=a[i][j];
					x1=i;
					y1=j;
				}
				else if(a[i][j]>ma)
				{
					ma=a[i][j];
					x1=i;
					y1=j;
				}
			}
		}
	//	cout<<x1<<" "<<y1<<endl;
		int x3=abs(x1+1)*abs(y1+1);
		int x4=(abs(x1-n+1)+1)*abs(y1+1);
		int x5=(abs(x1-n+1)+1)*(abs(y1-m+1)+1);
		int x8=abs(x1+1)*(abs(y1-m+1)+1);
	//	cout<<x3<<" "<<x4<<" "<<x5<<" "<<x8<<endl;
		int x6=max(x3,x4);
		int x7=max(x5,x8);
		cout<<max(x6,x7)<<endl;
	}
	return 0;
}
