#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int v[n];
		int a=0;
		int b=0;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]%2==0)
			{
				a++;
			}
			else{
				b++;
			}
		}
		cout<<min(a,b)<<endl;
	}
	return 0;
}
