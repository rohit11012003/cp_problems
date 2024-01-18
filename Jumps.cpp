#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		long long int x;
		cin>>x;
		if(x<=0)
		{
			cout<<abs(x)<<endl;
		}
		else{
			int j;
	if((pow(((8*x)+1),0.5)-1)%2==0)
	{
		 j=pow((((8*x)+1),0.5)-1)/2;
	}
	else {
		j=pow((((8*x)+1),0.5)-1)/2+1;
	}
		cout<<j<<endl;
		long long int a=j*(j+1)/2;
		
		if(a==x)
		{
			cout<<j<<endl;
		}
		else 
		{
			cout<<j+(a-x)<<endl;
		}
		}
	}
	return 0;
}
