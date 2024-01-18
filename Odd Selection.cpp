#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n,x;
	    cin>>n>>x;
		int a[n];
		int odd=0;
		int even=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				even++;
			}
			else{
				odd++;
			}
		}
		int p=0;
		if(odd==0)
		{
			cout<<"NO"<<endl;
		}
		else{
			for(int i=1;i<=odd;i++)
			{
				if(i>x)
				{
					break;
				}
				if((x-i)<=even)
				{
					cout<<"YES"<<endl;
					p=1;
					break;
				}
				i++;
			}
			if(p==0)
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
