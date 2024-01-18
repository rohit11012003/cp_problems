#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin >>t;
	for(int i=0;i<t;i++)
	{
		int y=0;
		int n;
		cin>>n;
		int x=n-1;
		for(int i=1;i>0;i++)
		{
			int k=(n/x)+1;
			if(n%x==0){
			
			for(int j=0;j<31;j++)
			{
				if(k==pow(2,j))
				{
					cout<<x<<endl;
					y=1;
					break;
					
				}
			}
			}
			x=x-1;
			if(y==1)
			{
				break;
			}
		}
	}
	return 0;
}
