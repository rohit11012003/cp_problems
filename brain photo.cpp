#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char A[n][m];
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
				if(A[i][j]=='C'||A[i][j]=='M'||A[i][j]=='Y')
				{
					cout<<"#Color"<<endl;
					return 0;
				}
			}
		}
		cout<<"#Black&White"<<endl;
		return 0;
	
}
