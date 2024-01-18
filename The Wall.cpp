#include<bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
	long long int x,y,a,b;
	cin>>x>>y>>a>>b;
	long long int d;
	long long int fi,la;
	long long int u=a;
	a=min(a,b);
	b=max(u,b);
	long long int g=max(x,y);
	for(long long int j=g;;j++)
	{
		if(j%x==0&&j%y==0)
		{
			d=j;
			break;
		}
		
	}

	if(a%d==0)
	{
		fi=a/d;
	}
	else{
		fi=(a/d);
		fi=fi+1;
	}
	if(b<d)
	{
		b=0;
	}
	else if(b%d==0)
	{
		la=(b/d);
	}
	else {
		la=(b/d);
	
	}
	if(b==0)
	{
		cout<<0<<endl;
	}
	else{
	
	
	cout<<la-fi+1<<endl;}
	return 0;
	
}
