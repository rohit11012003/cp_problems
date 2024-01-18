#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d,sum;
	cin>>d>>sum;
	int mi[d],ma[d];
	int sum1=0;
	int sum2=0;
	for(int i=0;i<d;i++)
	{
		cin>>mi[i]>>ma[i];
		sum1=sum1+mi[i];
		sum2=sum2+ma[i];
	}
	if(sum>sum2||sum<sum1)
	{
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
		sum=sum-sum1;
		for(int i=0;i<d;i++)
		{
			int g=sum;
			int h=ma[i]-mi[i];
			sum=sum-h;
			if(sum<0)
			{
				mi[i]=mi[i]+g;
				break;
			}
			else{
				mi[i]=mi[i]+h;
			}
		}
		for(int i=0;i<d;i++)
		{
			cout<<mi[i]<<endl;
		}
	}
	return 0;
}
