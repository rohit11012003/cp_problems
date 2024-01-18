#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector< pair<int,int> >v1;
	vector< pair<int,int> >v2;
	int a[n];
	long long int sum1=0;
	long long int sum2=0;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		v1.push_back(make_pair(i,sum1));
		v2.push_back(make_pair(i,sum2));
		if(i%2==0)
		{
		sum1=sum1+a[i];
		}
		else {
		sum2=sum2+a[i];
			
		}
	}
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		int odd=0,even=0;
		if(i%2==0)
		{
			odd=odd+v1[i].second;
			even=even+v2[i].second;
			odd=odd+sum2-v2[i].second;
			even=even+sum1-v1[i].second-a[i];
		}
		else if(i%2!=0)
		{
			odd=odd+v1[i].second;
			even=even+v2[i].second;
			odd=odd+sum2-v2[i].second-a[i];
			even=even+sum1-v1[i].second;
		}
	
		if(odd==even)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
