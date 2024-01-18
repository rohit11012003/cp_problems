#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	long long int a[n];
	long long int b[m];
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
	if(b[m-1]<=0)
	{
		if(a[1]<0)
		{
			cout<<a[1]*b[0]<<endl;
		}
		else{
			cout<<a[1]*b[m-1]<<endl;
		}
	}
	else if(b[0]>=0)
	{
	if(a[n-1]<0)
	{
		cout<<a[n-2]*b[0]<<endl;
	}
	else{
		if(a[n-2]>=0)
		{
			cout<<b[m-1]*a[n-2]<<endl;
		}
		else{
			cout<<b[0]*a[n-2]<<endl;
		}
	}
	}
	else{
		if(a[0]>=0)
		{
			cout<<b[m-1]*a[n-2]<<endl;
		}
		else if(a[n-1]<=0)
		{
			cout<<b[0]*a[1]<<endl;
		}
		else{
			if(a[0]*b[0]>a[n-1]*b[m-1])
			{
				cout<<max(a[1]*b[0],a[n-1]*b[m-1])<<endl;
			}
			else{
				cout<<max(a[0]*b[0],a[n-2]*b[m-1])<<endl;
			}
		}
	}
}
