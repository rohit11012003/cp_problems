#include<bits/stdc++.h>
using namespace std;
int main()
{

	int r,c;
	cin>>r>>c;
	int t1=max(2*r,c);
	int t2=max(2*c,r);
	if(r==1&&c==1)
	{
		cout<<0<<endl;
		return 0;
	}
	else if(r==1||c==1)
	{
		if(r==1)
		{
			for(int i=0;i<c;i++)
			{
				cout<<i+2<<" ";
			}
			cout<<endl;
		}
		else if(c==1)
		{
			for(int i=0;i<r;i++)
			{
				cout<<i+2<<endl;
			}
		}
	}
	else {
		
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<(c+i+1)*(j+1)<<" ";
		}
		cout<<endl;
	}
	}

	return 0;
}
