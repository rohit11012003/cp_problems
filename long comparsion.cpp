#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
     long long int a,d;
      double h,j;
		cin>>a>>d;
		h=log10(a)+d;
	long long int b,f;
		cin>>b>>f;
		j=log10(b)+f;
		if(h>j)
		{
			cout<<">"<<endl;
		}
		else if(j>h)
		{
			cout<<"<"<<endl;
		}
		else {
			cout<<"="<<endl;
	}
	}
	return 0;
}
