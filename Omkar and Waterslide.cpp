#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n;
		cin>>n;
		long long int sum=0;
		vector<int> a;
		int x,y;
		int ma;
		int mi;
		
			for(int i=0;i<n;i++)
			{
				int nm;
				cin>>nm;
				a.push_back(nm);
				if(i==0)
				{
					x=0;
					y=0;
					ma=a[i];
					mi=a[i];
				}
				else {
					if(a[i]>ma)
					{
						ma=a[i];
						x=i;
					}
					else if(a[i]<mi)
					{
						mi=a[i];
						y=i;
					}
				}
			}
			if(x==n-1)
			{
				cout<<0<<endl;
			}
			else {
				int f=0;
				while(f==0)
				{
				
					for(int i=x+1;i<a.size();i++)
					{
						if(i==x+1)
						{
							mi=a[x+1];
							y=x+1;
						}
						else {
							if(a[i]<mi)
							{
								mi=a[i];
								y=i;
							}
						}
					}
					if(mi==ma)
					{
						f=1;
						break;
					}
					
					sum=sum+(ma-mi);
					int le;
					int re;
					for(int i=y;i<a.size();i++)
					{
						if(i==y)
						{
							re=y;
						}
						if(a[i+1]<a[i])
						{
							re=i;
							break;
						}
					}
						for(int i=y;i>x;i--)
					{
						
						if(i==y)
						{
							le=y;
						}
						if(i==x+1)
						{
							le=i;
							break;
						}
						if(a[i-1]<a[i])
						{
							le=i;
							break;
						}
					}
					
					for(int i=le;i<=re;i++)
					{
						a[i]=ma;
					}
					
					
				
					
				}
				cout<<sum<<endl;
			}
		
	}
	return 0;
}
