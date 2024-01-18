#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sliding windoe of size 4
	int k=3;
	int count=0;
	int i=0;
	int j=0;
	vector<int> v;
	while(j!=n)
	{
		if(j<=i+k-1)
		{
			count=count+a[j];
			j++;
		}
		else{
			
			v.push_back(count);
			
			count=count-a[i];
			i++;
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
}
