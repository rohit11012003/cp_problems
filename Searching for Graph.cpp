#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	
	int n,p;
	cin>>n>>p;
	int z=(2*n)+p;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			cout<<i<<" "<<j<<endl;;
			count++;
			if(count==z)
			{
				break;
			}
		}
		if(count==z)
		{
			break;
		}
	}
	cout<<endl;
}
}
