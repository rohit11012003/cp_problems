#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char A[n][m];
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(A[i][j]=='f')
			{
				a=a+1;
				cout<<"hello";
			}
		else	if(A[i][j]=='a')
			{
				b=b+1;
			}
			else if(A[i][j]=='c')
			{
				c=c+1;
			}
			else if(A[i][j]=='d')
			{
				d=d+1;
		
			}
			
		}}

	int r=min(a,b);
	int p=min(c,d);
	cout<<min(r,p)<<endl;
	return 0;
}
