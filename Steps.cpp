#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int x,y;
	cin>>x>>y;
	int k;
	cin>>k;
	long long int count=0;
	for(int i=0;i<k;i++)
	{
		long long int d1,d2;
		cin>>d1>>d2;
		long long int j1,j2;
		if(d1>0&&d2>0)
		{
			d1=abs(d1);
			d2=abs(d2);
			j1=(n-x)/d1;
			j2=(m-y)/d2;
			long long int j=min(j1,j2);
			count=count+j;
			x=x+(j*d1);
			y=y+(j*d2);
		}
		else if(d1>0&&d2<0)
		{
			d1=abs(d1);
			d2=abs(d2);
			j1=(n-x)/d1;
			j2=(y-1)/d2;
			long long int j=min(j1,j2);
			count=count+j;
			x=x+(j*d1);
			y=y-(j*d2);
		}
		else if(d1<0&&d2>0)
		{
			d1=abs(d1);
			d2=abs(d2);
			j1=(x-1)/d1;
			j2=(m-y)/d2;
			long long int j=min(j1,j2);
			count=count+j;
			x=x-(j*d1);
			y=y+(j*d2);
		}
		else if(d1<0&&d2<0)
		{
			d1=abs(d1);
			d2=abs(d2);
			j1=(x-1)/d1;
			j2=(y-1)/d2;
			long long int j=min(j1,j2);
			count=count+j;
			x=x-(j*d1);
			y=y-(j*d2);
		}
		else if(d1==0)
		{
			if(d2>0)
			{
				long long int j=(m-y)/d2;
				count=count+j;
				y=y+(d2*j);
			}
			else if(d2<0)
			{
				d2=abs(d2);
				long long int j=(y-1)/d2;
				count=count+j;
				y=y-(d2*j);
			}
		}
		else if(d2==0)
		{
			if(d1>0)
			{
				long long int j=(n-x)/d1;
				count=count+j;
				x=x+(d1*j);
			}
			else if(d1<0)
			{
				d1=abs(d1);
				long long int j=(x-1)/d1;
				count=count+j;
				x=x-(d1*j);
			}
		}
	//	cout<<count<<endl;
	}
	cout<<count<<endl;
}
