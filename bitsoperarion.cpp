#include<bits/stdc++.h>
using namespace std;
void  printbinary(int j)
{
	for(int i=10;i>=0;i--)
	{
		cout<<((j>>i)&1);
	}
	cout<<endl;
}
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int j;
		cin>>j;
		printbinary(j);
	}
	int j;
	cin>>j;
	int i;
	cin>>i;
	//checking if ith bit is set or not
	if(((j>>i)&1)!=0)
	{
		cout<<"ith bit is set"<<endl;
	}
	else{
		cout<<"iht bit is unset"<<endl;
	}
	// making ith bit set 
	printbinary((j|1<<i));
	//making ith bit unset
	int k;
	cin>>k;
	printbinary(j&(~(1<<k)));
	// toggling of ith bit
	int y;
	cin>>y;
	printbinary(j ^ (1<<y));
	//finding number of set bits
	cout<<__builtin_popcount(j)<<endl; 
}
