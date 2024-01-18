#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(a*m>b)
	{
	int sum=0;
	sum=(n/m);
	sum=sum*b;
	if((n%m)*a>b)
	{
		sum=sum+b;
	}
	else{
		sum=sum+((n%m)*a);
	}
	cout<<sum<<endl;
	}
	else{
		cout<<n*a<<endl;
	}
	return 0;
}
