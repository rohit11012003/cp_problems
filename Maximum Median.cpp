#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int k;
	cin>>k;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int z=(n-1)/2;
	long long int count=0;
	for(int i=z;i<n;i++)
	{
		count=count+a[n-1]-a[i];
	}
	if(k>=count)
	{
		k=k-count;
		int p=n-z;
	cout<<a[n-1]+(k/p)<<endl;
	}
	else{
		int p;
		long long int sum=0;
		long long int count1;
		for(int i=z;i<n;i++)
		{
			//cout<<i<<" "<<sum<<endl;
			sum=sum+a[i];
			count1=((i-z+1)*(a[i]))-sum;
			if(count1>k)
			{
				p=i;
				break;
			}
		}
		//cout<<p<<" "<<sum<<endl;
		sum=sum-a[p];
		//cout<<sum<<endl;
		p=p-1;
		k=k-((p-z+1)*a[p])+sum;
		cout<<a[p]+k/(p-z+1)<<endl;
	}
	return 0;
}
