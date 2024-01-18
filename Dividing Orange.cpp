#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[k];
	for(int i=0;i<k;i++)
	{
		cin>>A[i];
	}
	int i=1;
	for(int j=0;j<k;j++)
	{
		int m=1;
		cout<<A[j]<<" ";
		
		while(i<=n*k)
		{
			int t=0;
			for(int p=0;p<k;p++)
			{
				if(A[p]==i)
				{
					t=1;
					break;
				}
			}
			if(t==1)
			{
				i++;
				
			}
			else {
				cout<<i<<" ";
				i++;
				m++;
			}
			if(m==(n))
			{
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
