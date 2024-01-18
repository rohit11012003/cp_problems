#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			j=1;
		}
	}
	if(j==0)
	{
		cout<<0<<endl;
	}
	else{
	
    long long	int t=1;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			v.push_back(i);
		}
		
	}
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i+1]-v[i]>1)
		{
			int z=v[i+1]-v[i]-1;
			t=t*(z+1);
		}
	}
//	cout<<pow(2,t)<<endl;
if(t==0)
{
	cout<<1<<endl;
}
else{
	cout<<t<<endl;
}
}
	return 0;
}
