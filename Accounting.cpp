#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	if(a==0)
	{
		if(b==0)
		{
			cout<<1<<endl;
			return 0;
		}
		else{
			cout<<"No solution"<<endl;
			return 0;
		}
	}
	if(b==0)
	{
		cout<<0<<endl;
		return 0;
	}
	if(b%a!=0)
	{
		cout<<"No solution"<<endl;
		return 0;
	}
	else{
		int k=b/a;
		for(int i=-1000;i<=1000;i++)
		{
			if(pow(i,n)==k)
			{
				cout<<i<<endl;
				return 0;
			}
		}
		cout<<"No solution"<<endl;
	}
	return  0;
}
