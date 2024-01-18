#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	{
		for(int p=0;p<t;p++)
		{
			long long int n;
			cin>>n;
		    double sum=n;
			for(int i=n-1;i>=1;i--)
			{
				sum=round((sum+i)/2);
			}
			cout<<sum<<endl;
			sum=n;
			for(int i=n-1;i>=1;i--)
			{
				cout<<i<<" "<<sum<<endl;
				sum=round((sum+i)/2);
			}
		}
	}
	return 0;
}
