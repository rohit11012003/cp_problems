#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}

	int r=0;
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=A[j][i];
		}
		if(sum!=0)
		{
			r=1;
		}
	}
	if(r==1)
	{
		cout<<"NO"<<endl;
	}
	else if(r==0)
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
