#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int x,y;
		long long int a,b;
		cin>>x>>y;
		cin>>a>>b;
		if(b>=(2*a)||x>0&&y<0||y<0&&x>0)
		{
			cout<<abs(x)*a+abs(y)*a<<endl;
		}
		else {
			if(x>=0&&y>=0)
			{
				long long int c=min(x,y);
				long long int d=max(x,y);
				cout<<(c*b)+(d-c)*a<<endl;
			}
			else if(x<0&&y<0)
			{
				x=abs(x);
				y=abs(y);
					long long int c=min(x,y);
				long long int d=max(x,y);
				cout<<(c*b)+(d-c)*a<<endl;
			}
		}
	}
	return 0;
}
