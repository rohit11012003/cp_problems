#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int x,y;
		cin>>x>>y;
		if(x==y)
		{
			cout<<"YES"<<endl;
		}
		else if(x>y)
		{
			cout<<"YES"<<endl;
		}
		else{
			if(x>=4)
			{
				cout<<"YES"<<endl;
			}
			else if(x==2&&y==3)
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
