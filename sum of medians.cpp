#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	     long long int n,k;
	      cin>>n>>k;
	      long long int e=n*k;
	      int A[e];
	      for(int i=0;i<e;i++)
	      {
	      	cin>>A[i];
		  }
		  long long int count=0;
		  long long int d=(n/2)+1;
		  for(int i=1;i<=k;i++)
		  {
		  	count=count+A[e-(i*d)];
		  }
		  cout<<count<<endl;
	}
	return 0;
}
