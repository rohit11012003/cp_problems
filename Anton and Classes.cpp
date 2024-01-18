#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a1[n],b1[n];
	for(int i=0;i<n;i++)
	{
		cin>>a1[i];
		cin>>b1[i];
	}
	long long int m;
	cin>>m;
	long long int a2[m],b2[m];
	for(int i=0;i<m;i++)
	{
		cin>>a2[i];
		cin>>b2[i];
	}
	sort(b1,b1+n);
	sort(a2,a2+m);
	
	long long int t1=a2[m-1]-b1[0];
	if(t1<0)
	{
		t1=0;
	}
	sort(b2,b2+m);
	sort(a1,a1+n);
	
	long long int t2=a1[n-1]-b2[0];
	if(t2<0)
	{
		t2=0;
	}
	cout<<max(t1,t2)<<endl;
	return 0;
	
}
