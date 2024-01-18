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
		int a[n];
		double count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			count=count+a[i];
		}
		sort(a,a+n);
		
		if(n%2!=0)
		{
			count=count-a[n/2];
		//	cout<<count<< " "<<a[n/2]<<endl;
		double z=count/(n-1);
		//cout<<z<<endl;
			if(z==a[n/2])
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			count=count-a[(n+1)/2];
		
		double z=count/(n-1);
			if(z==a[(n+1)/2])
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	
	return 0;
}	
