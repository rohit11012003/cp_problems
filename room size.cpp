#include<iostream>
using namespace std;
void binary(int a)
{
	int s[4];
	int i=0;
	int r;
	while(a!=0)
	{
	  r=a%2;
	  a=a/2;
	  s[i]=r;
	  i=1+1;
	  	
	}
	for(int i=0;i<4;i++)
	{
		cout<<s[i];
	}
}
int main()
{
	int N,M;
	cin>>N>>M;
	int A[N*M];
	for(int i=0;i<N*M;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N*M;i++)
	{
		binary(A[i]);
	}
	return 0;
	
}

