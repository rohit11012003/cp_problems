#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<t;i++)
	{
		long long int s=a[i];
		if(s<=20&&s>=15)
		{
			cout<<"YES"<<endl;
		}
		else if(s<15)
		{
			cout<<"NO"<<endl;
		}
		else if(s>20)
		{
			long long int b=s/14;
			b=14*b;
			if(s>=b+1&&s<=b+6)
			{
				cout<<"YES"<<endl;
			}
			else {
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
