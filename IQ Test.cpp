#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
}

	int t=0;
	for(int j=0;j<3;j++)
	{
		
		if(a[0][j+1]==a[1][j]&&a[1][j]==a[1][j+1])
		{
			t=1;
		}
		if(a[0][j]==a[1][j]&&a[1][j]==a[1][j+1])
		{
			t=1;
		}
		if(a[0][j]==a[0][j+1]&&a[0][j+1]==a[1][j+1])
		{
			
			t=1;
		}
		if(a[0][j+1]==a[1][j]&&a[1][j]==a[0][j])
		{
			t=1;
		}
	}
	if(t==1)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	else{
			for(int j=0;j<3;j++)
	{
		if(a[1][j+1]==a[2][j]&&a[2][j]==a[2][j+1])
		{
			t=1;
		}
		if(a[1][j]==a[2][j+1]&&a[2][j+1]==a[2][j])
		{
			t=1;
		}
		if(a[1][j]==a[1][j+1]&&a[1][j+1]==a[2][j+1])
		{
			t=1;
		}
		if(a[1][j]==a[1][j+1]&&a[1][j+1]==a[2][j])
		{
			t=1;
		}
		if(t==1)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		else{
				for(int j=0;j<3;j++)
	{
		if(a[2][j+1]==a[3][j]&&a[3][j]==a[3][j+1])
		{
			t=1;
		}
		if(a[2][j]==a[3][j+1]&&a[3][j+1]==a[3][j])
		{
			t=1;
		}
		if(a[2][j]==a[2][j+1]&&a[2][j+1]==a[3][j+1])
		{
			t=1;
		}
		if(a[2][j]==a[2][j+1]&&a[2][j+1]==a[3][j])
		{
			t=1;
		}
		}
	}
	if(t==1)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	else{
		if(a[2][3]==a[3][2]&&a[3][2]==a[3][3])
		{
			t=1;
		}
		if(a[2][2]==a[3][2]&&a[3][2]==a[3][3])
		{
			t=1;
		}
		if(a[2][2]==a[2][3]&&a[2][3]==a[3][3])
		{
			t=1;
		}
		if(a[2][2]==a[2][3]&&a[2][3]==a[3][2])
		{
			t=1;
		}
	}
	
	}
	if(t==1)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	else{
		cout<<"NO"<<endl;
		return 0;
	}
}}
