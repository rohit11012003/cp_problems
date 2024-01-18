#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(k==0)
	{
		if(a[0]==1)
		{
			cout<<-1<<endl;
			return 0;
		}
		else{
			cout<<a[0]-1<<endl;
		}
	}
	else if(a[k-1]==a[k])
	{
		cout<<-1<<endl;
		return 0;
	}
	else{
		cout<<a[k-1]<<endl;
	}
	return 0;
}
