#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[8][8];
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>a[i][j];
		}
	}
	int count=0;
	for(int i=0;i<8;i++)
	{
		if(a[i][0]=='B')
		{
			int l=0;
			for(int j=0;j<8;j++)
			
			{
				if(a[i][j]=='W')
				{
					l=1;
					break;
				}
			}
			if(l==0)
				{
					count=count+1;
				}
		}
	}
	if(count==8)
	{
		cout<<8<<endl;
		return 0;
	}
	else {
		for(int i=0;i<8;i++)
	{
		if(a[0][i]=='B')
		{
			int l=0;
			for(int j=0;j<8;j++)
			
			{
				if(a[j][i]=='W')
				{
					l=1;
					break;
				}
				
			}
			if(l==0)
				{
					count=count+1;
				}
		}
	}
	}
	cout<<count<<endl;
	return 0;
}
