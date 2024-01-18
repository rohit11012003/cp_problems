#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int n=c/a;
	int t=0;
	for(int i=0;i<=n;i++)
	{
	    int  z=c-(a*i);
	    if(z%b==0)
	    {
	    	t=1;
	    	break;
		}
	}
	if(t==0)
	{
		cout<<"NO"<<endl;
	}
	else if(t==1)
	
	{
		cout<<"YES"<<endl;
	}
	return 0;
}
