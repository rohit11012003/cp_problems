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
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[n-1]==a[n-2])
	{
		long long int p=1;
		for(int i=1;i<=n;i++)
		{
			p=(p*i)%998244353;
		}
		cout<<p<<endl;
	}
	else{
		if(a[n-1]-a[n-2]>=2)
		{
			cout<<0<<endl;
		}
		else{
		int z=0;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]==a[n-2])
			{
				z++;
			}
			else{
				break;
			}
		}
	//	cout<<z<<endl;
		long long int ans1=1,ans2=1;
		for(int i=1;i<=n;++i)
		{
		ans1=(ans1*i)%998244353;
		if(i!=z+1){
			ans2=(ans2*i)%998244353;
		}	
		}
		cout<<(ans1-ans2+998244353)%998244353<<endl;
			
		}
		
	}
}
	return  0;
}
