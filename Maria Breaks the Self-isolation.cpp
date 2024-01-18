#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int g=n+1;
		for(int i=n-1;i>=0;i--)
		{
		
			if(a[i]<=g-1)
			{
				break;
			}
			else {
				g=g-1;
			}
		}
		cout<<g<<endl;
	}
	return 0;
}
