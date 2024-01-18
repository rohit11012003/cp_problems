#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	int count=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<=(count+1))
		{
			if((count+1-a[i])%b[i]==0)
			{
				count++;
			}
			else {
				int e=(count+1-a[i])/b[i];
				count=a[i]+((e+1)*b[i]);
			}
		}
		else if(a[i]>count+1)
		{
			count=a[i];
		}
	}
	cout<<count<<endl;
	return 0;
	
}
