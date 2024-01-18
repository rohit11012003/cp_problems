#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n];
	int y[n];
	int sum1=0;
	int sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		sum1=sum1+x[i];
		sum2=sum2+y[i];
	}
	
	if(sum1%2==0&&sum2%2==0)
	{
		cout<<0<<endl;
	}
	else if((sum1%2!=0)&&(sum2%2!=0))
	{
		int u=0;
		for(int i=0;i<n;i++)
		{
			if((x[i]%2!=0)&&(y[i]%2==0))
			{
				u=1;
				break;
			}
			else if(x[i]%2==0&&y[i]%2!=0)
			{
				u=1;
				break;
			}
		}
		if(u==1)
		{
			cout<<1<<endl;
		}
		else {
			cout<<-1<<endl;
		}
	}
	else {
		cout<<-1<<endl;
	}
	return 0;
}
