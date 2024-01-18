#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int q;
	q=n/5;
	if(n%5==0)
	{
		cout<<q;
	}
	else {
		cout<<q+1;
	}
}
