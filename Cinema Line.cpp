#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	 int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int a=0;
	int b=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==25)
		{
			a++;
		}
		else if(v[i]==50)
		{
			if(a==0)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			else {
				b++;
				a--;
			}
		}
		else if(v[i]==100)
		{
			if(b==0)
			{
				if(a<3)
				{
					cout<<"NO"<<endl;
					return 0 ;
				}
				else {
					a=a-3;
				}
			}
			else {
				if(a==0)
				{
					cout<<"NO"<<endl;
					return 0;
				}
				else {
					b--;
					a--;
				}
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
