#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int max;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i==0)
		{
			max=a[i];
		}
		else if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	
	sort(a,a+n);
	long long int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum=sum+max-a[i];
	}
	vector<long long int> v;
	for(int i=0;i<n-1;i++)
	{
		v.push_back(a[i+1]-a[i]);
	}
	sort(v.begin(),v.end());
	
//	for(long long int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
long long int z;
	vector<long long int> v2;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0)
		{
			z=v[i];
			break;
		}
	}
	v2.push_back(1);
	
	long long int b=2;
	while(b!=z)
	{
		if(z%b==0)
		{
			v2.push_back(b);
		}
		b++;
	}
	v2.push_back(z);
//	cout<<"hello";
//	for(long long int i=0;i<v2.size();i++)
//	{
//		cout<<v2[i]<<" ";
//	}
//	cout<<endl;
	long long int k=0;
	for(long long int i=v2.size()-1;i>=0;i--)
	{
		int t=0;
		for(long long int j=0;j<v.size();j++)
		{
			if(v[j]%v2[i]!=0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			k=i;
			break;
		}
	}
	cout<<sum/v2[k]<<" "<<v2[k]<<endl;
	return 0;
	
}
