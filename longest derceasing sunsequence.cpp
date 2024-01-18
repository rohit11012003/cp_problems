#include<bits/stdc++.h>
using namespace std;
int fun1(int a[], int ind , int val)
{
	if(ind ==-1)
	{
		return 0;
	}
	else{
		if(a[ind]<val)
		{
			return max(fun1(a, ind-1 , a[ind])+1,fun1(a,ind-1,val) );
		}
		else{
			return fun1(a,ind-1, val);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=1;
	for(int i=1;i<n;i++)
	{
		ans=max(ans,1+ fun1(a,i-1,a[i]));
	}
	cout<<ans<<endl;
}
