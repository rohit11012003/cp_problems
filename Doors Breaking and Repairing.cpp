#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int x,y;
	cin>>x>>y;
	int v=0;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(x>=a[i])
		{
			v++;
		}
	}
	if(x>y)
	{
		cout<<n<<endl;
		return 0;
	}
	else {
		if(v%2==0)
		{
			cout<<(v/2)<<endl;
		}
		else {
			cout<<(v/2)+1<<endl;
			return 0;
		}
	}
	return 0;
}
