#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	vector<long long int> v;
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		v.push_back(sum);
	 }
	 while(q--)
	 {
	 	int x,y;
	 	cin>>x>>y;
	 	if(x==y)
	 {
	 	cout<<v[x-1]<<endl;
	 }
	 else {
	 	cout<<v[x-1]-v[x-1-y]<<endl;
	 }
	 
	  } 
	 return 0;
}
