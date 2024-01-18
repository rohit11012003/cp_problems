#include<iostream>
using namespace std;
int sleeper(int l,int r)
{
	int k=0;
	for(int c=l;c<=r;c++)
	{
		for(int d=c+1;d<=r;d++)
		{
			
			if(k<d%c)
			{
				k=d%c;
			}
			
		}
	}
	return k;
}
int main()
{
	int t;
	cin>>t;
	int l,r;
	for(int i=0;i<t;i++)
	{
		cin>>l>>r;
	cout<<	sleeper(l,r)<<endl;
		
	}
	return 0;
}
