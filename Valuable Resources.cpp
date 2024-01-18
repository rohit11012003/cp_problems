#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	vector< long long int > v1;
	vector< long long int > v2;
	for(int i=0;i<n;i++)
	{
		 long long int a,b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
    long long int x,y;
//	cout<<v1[0]<<" "<<v1[n-1]<<endl;
	x=v1[n-1]-v1[0];
	y=v2[n-1]-v2[0];
//	cout<<x<<" "<<y<<endl;
	x=abs(x);
	y=abs(y);
//	cout<<x<<" "<<y<<endl;
	x=max(x,y);
	unsigned long long int z=x*x; 
	cout<<z<<endl;
	return 0;
	
	
}
