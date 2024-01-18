#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int z;
	z=240-k;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if((z-5*i)>=0)
		{
			count =count+1;
			z=z-5*i;
		}
		else {
			break;
		}
	}
	cout<<count;
	
}
