#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	vector<long long int > v1;
	for(int i=0;i<n;i++)
	{
		long long int h;
		cin>>h;
		v1.push_back(h);
	}
	vector<long long int > v;
	for(int i=0;i<n;i++){
		vector<long long int > a;
		a=v1;
		long long int count=0;
		count++;
		for(int j=i-2;j>=0;j--)
		{
			long long int t=a[j+1]/a[j];
			count=count+t+1;
			a[j]=a[j]*(t+1);
		}
		count++;
		for(int j=i+2;j<n;j++)
		{
			long long int t=a[j-1]/a[j];
			count=count+t+1;
			a[j]=a[j]*(t+1);
		}
		v.push_back(count);
//		for(int h=0;h<n;h++)
//		{
//			cout<<a[h]<<" ";
//		}
//		cout<<endl;
	}
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
	sort(v.begin(),v.end());
	cout<<v[0]<<endl;
	return 0;
}
