#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		long long int a,b;
		cin>>a>>b;
		int u;
		int p=0;
		long long int z=pow(10,18)/b;
		int x,y;
		for(int i=1;i<=z;i++){
			x=1;
			while(x!=((b*i)/2)+1)
			{
				y=(b*i)-x;
			
				if(x!=y)
				
				{
				
				if(x%b!=0&&y%b!=0)
				{
				p=1;
				break;	
				}
				
			}
			x=x+1;
			}
			if(p==1)
			
			{
				u=i;
				break;
			}
		}
		if(p==1)
	{
		cout<<"YES"<<endl;
		cout<<a*x<<" "<<a*y<<" "<<u*(a*b)<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	}
	
	return 0;
}
