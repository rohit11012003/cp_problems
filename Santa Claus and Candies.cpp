#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t;
	for(int i=1;;i++)
	{
		int sum=i*(i+1)/2;
		if(sum==n)
		{
			cout<<i<<endl;
			for(int j=1;j<=i;j++)
			{
				cout<<j<<" ";
			}
			return 0;
		}
		else if(sum>n)
		{
			cout<<i-1<<endl;
			for(int j=1;j<=i-2;j++)
			{
				cout<<j<<" ";
			}
			cout<<n-((i-2)*(i-1)/2);
			return 0;
		}
	}
	
}
