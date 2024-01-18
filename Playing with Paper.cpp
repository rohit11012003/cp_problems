#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	cin>>a>>b;
	long long int count=0;
	if(a==b)
	{
		cout<<1<<endl;
	}
	else{
	
	while(a!=b)
	{
		count=count+(a/b);
		long long int g=a/b;
		a=a-(g*b);
		if(a==0)
		{
			break;
		}
		long long int ma=max(a,b);
		long long int mi=min(a,b);
		a=ma;
		b=mi;
		
	}
	cout<<count<<endl;}
	return 0;
}
