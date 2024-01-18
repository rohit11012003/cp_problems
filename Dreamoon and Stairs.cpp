#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n,m;
	cin>>n>>m;
	int c=n/2;
	int t=0;
	int d=n%2;
	int count;
    while(c>=0)
	{
		count=c+d;
		if(count%m==0)
		{
			t=1;
			break;
			
		}
		else {
			c=c-1;
			d=d+2;
		}
	}
	if(t==1)
	{
		cout<<count<<endl;
	}
	else if(t==0)
	{
		cout<<-1<<endl;
	}
	return 0;
}
