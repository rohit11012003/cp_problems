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
	sort(a,a+n);
	if(a[0]==a[n-1])
	{
		cout<<0<<" "<<(n*(n-1))/2<<endl;
	}
	else {
		long long int y=a[0];
		long long int t1=0;
		long long int t2=0;
		long long int z=a[n-1];
		for(int i=0;i<n;i++)
		{
			if(a[i]==y)
			{
				t1++;
			}
			else {
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]==z)
			{
				t2++;
			}
			else{
				break;
			}
		}
		cout<<z-y<<" "<<(t1*t2)<<endl;
	}
	return 0;
}
