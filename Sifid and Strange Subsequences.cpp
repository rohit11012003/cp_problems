#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		int n;
		cin>>n;
		int a=0,b=0,c=0,d=0;;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int h;cin>>h;
			if(h<0)
			{
				a=a+1;
			}
			if(h==0)
			{
				b=b+1;
			}
			if(h>0)
			{
				d=1;
			}
			v.push_back(h);
		}
		sort(v.begin(),v.end());
		int u=abs(v[1]-v[0]);
		if(a!=0)
		{
			for(int i=1;i<n;i++)
			{
				if(v[i]>=0)
				{
					break;	}
				int gh=abs(v[i]-v[i-1]);
				if(gh<u)
				{
					u=gh;
				}
			}
		}
		int y=0;
		int z=0;
		for(int i=0;i<n;i++)
		{
			
			if(v[i]>=0&&v[i-1]<0)
			{
				y=v[i-1];
				
			}
			if(v[i]>0)
			{
				z=v[i];
				break;
			}
		}
		for(int i=1;i<n;i++)
		
		
		{
			if(v[i]>0)
		{
			break;
		}
			if(v[i]==v[i-1])
			{
				c=1;
			}
		}
		if(a==n)
		{
			cout<<n<<endl;
		}
		else if(a!=0&&c==0)
		{
			if(b==0&&d==1)
			{
				if(u>=z)
				{
				
				cout<<a+1<<endl;}
				else {
					cout<<a<<endl;
				}
			}
			else if(b!=0)
			{
			if(d==0)
			{
				cout<<a+b<<endl;
			}
			else {
				if(abs(y)>=z&&u>=z)
				{
					cout<<a+b+1<<endl;
				}
				else {
					cout<<a+b<<endl;
				}
			}
			}
			
		}
		else if(a!=0&&c!=0)
		{
			cout<<a+b<<endl;
		}
		else if(a==0)
		{
			if(b==0)
			{
				cout<<1<<endl;
			}
			else {
				if(b>=2)
				{
					cout<<b<<endl;
				}
				else if(b==1)
				{
					if(d==0)
					{
						cout<<1<<endl;
					}
					else if(d!=0)
					{
						cout<<2<<endl;
					}
				}
			}
		}
	}
	return 0;
}
