//checking wether a given number is prime or not using sieve alogrithm
#include<bits/stdc++.h>
using namespace std;
int n=1e7+10;
int main()

{
	vector<bool> v(n,1);
	v[0]=v[1]=false;

	for(int i=2;i<=n;i++)
	{
		if(v[i]==true)
		{
			for(int j=i*2;j<=n;j+=i)
			{
				v[j]=false;
			}
		}
	}

	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
	//time complexity of this method is O(loglog(n))
	
}
