#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	char A[4][4];
	int count=0;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>A[i][j];
		}
	}
	int c=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='1')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='2')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='3')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='4')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='5')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='6')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='7')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='8')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	c=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(A[i][j]=='9')
			{
				c++;
			}
		}
	}
	if(c>count)
	{
		count=c;
	}
	if(count>(2*k))
	{
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
	}
	return 0;
}
