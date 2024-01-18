#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long int n,m;
		cin>>n>>m;
	
			if(n*m%3==0)
			{
				cout<<(n*m)/3<<endl;
			}
			else cout<<(n*m)/3+1<<endl;
	}
	return 0;
}
