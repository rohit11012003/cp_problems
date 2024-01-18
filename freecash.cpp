#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		long long int n;
		long long int a=0;
		long long int count=0;
		long long int b=0;
		cin>>n;
		long long int s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			if(s[i]>0)
			{
				a=a+s[i];
			}
			else if(s[i]<0)
			{
				b=b+abs(s[i]);
			}
			if(b>a)
			{
				count=(b-a);
				b=0;
				a=0;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}