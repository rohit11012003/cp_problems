#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	long long int b;
	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		{
			if(a[i]==a[i+1])
			{
				 b=a[i];
				break;
			}
			if(a[0]%a[i]!=0)
			{
				b=a[i];
				break;
			}
		}
		else {
			b=1;
		}
	}
	cout<<a[0]<<" "<<b<<endl;
	return 0;
}
