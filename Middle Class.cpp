#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int n,x;
		cin>>n>>x;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int v;
		int b=0;
		sort(a,a+n,greater<int>());
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			sum=sum+a[i];
			if(sum<(i+1)*x)
			{
				v=i;
				b=1;
				break;
			}
		}
		if(b==0)
		{
			cout<<n<<endl;
		}
		else {
			cout<<v<<endl;
		}
	}
	return 0;
}
