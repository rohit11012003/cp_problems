#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int A[m];
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	int count=-(m);
	for(int i=1;i<=n;i++)
	{
		int  c=0;
		for(int j=0;j<m;j++)
		{
			if(A[j]==i)
			{
				c--;
			}
		}
		cout<<c<<endl;
		if(c>count)
		{
			count=c;
		}
	}
	cout<<-(count)<<endl;
	return  0;
}
