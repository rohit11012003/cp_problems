#include<iostream>
#include<cmath>
using namespace std;
int f(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			return i+n;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		
	
long long int n,k;
	cin>>n>>k;
	int a=0;
	for(int i=0;i<k;i++)
	{
		n=f(n);
		}
		cout<<n<<endl;
	}
	return 0;
}
