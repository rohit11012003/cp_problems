#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
long long	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		count =count+a[i];
	}
sort(a, a + n, greater<int>());
	int m;
	cin>>m;
long long 	int z=count;

	for(int i=0;i<m;i++)
	{long long int e;
	cin>>e;
		count=z;
		count=count-a[e-1];
		cout<<count<<endl;
	}
	return 0;
}
