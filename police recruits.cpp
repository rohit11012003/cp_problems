#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a<0&&p>0){
		p=p-1;	
		count=count-1;
		}
		else if(a<0&&p<=0)
		{
			count=count+1;
		}
		else if(a>0)
		{
			p=p+a;
		}
	}
		cout<<count;
	
	return 0;
}
