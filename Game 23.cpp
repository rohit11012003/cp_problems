#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	int t=0;
/*	if(k%1==0)
	{
		cout<<k<<endl;
		t=1;
	}
else 	if(v%1==0)
	{
		cout<<v-1<<endl;
		t=1;
	}
	else */{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(n*pow(2,i)*pow(3,j)==m)
				{
					cout<<i+j<<endl;
					t=1;
					break;
				}
			}
		}
	}
	if(t==0)
	{
		cout<<-1<<endl;
	}
	return 0;
}
