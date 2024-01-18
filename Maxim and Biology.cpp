#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	long long int count=0;
	for(int i=0;i<n;i++)
	{
		long long int t=0;
		if(i+3>n-1)
		{
			break;
		}
		else {
			int a,b,c,d;
			a=s[i];
			b=s[i+1];
			c=s[i+2];
			d=s[i+3];
			a=abs(a-65);
			if(a>13)
			{
				a=26-a;
			}
			b=abs(b-67);
			if(b>13)
			{
				b=26-b;
			}
			c=abs(c-84);
			if(c>13)
			{
				c=26-c;
			}
			d=abs(d-71);
			if(d>13)
			{
				d=26-d;
			}
			t=a+b+c+d;
			if(i==0)
			{
				count=t;
			}
			else if(t<count)
			{
				count=t;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
