#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;

	long long int x,y;
	cin>>x>>y;
	cin>>n;
	long long int count;
	long long int a=(n%3);
	long long int b=(n/3);
	if(a==0)
	{
		if(b%2==0)
		{
			count=-(y-x);
		}
		else{
			count=(y-x);
		}
	}
	else {
		if(b%2!=0)
		{
			if(a==1)
			{
				count=-x;
			}
			else if(a==2)
			{
				count=-y;
			}
		}
		else{
			if(a==1)
			{
				count=x;
			}
			else if(a==2)
			
			{
				count=y;
			}
		}
	}
    if(count<0)
    {
    	cout<<(1000000007+(count%1000000007))%1000000007<<endl;
	}
	else{
	
	cout<<count%1000000007<<endl;}
	return 0;
}
