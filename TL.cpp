#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	long long time=max(2*a[0],a[n-1]);
	if(time>=b[0])
	{
		cout<<-1<<endl;
	}
	else {
		cout<<time<<endl;
	}
	return 0;
}
