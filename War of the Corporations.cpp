#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	long long int count=0;
	int n=b.size();
	if(a.size()<n)
	{
		cout<<0<<endl;
	}
	else{
	
	for(int i=0;i<=a.size()-n;i++)
	{
		int k=i;
		string g;
		for(int j=0;j<n;j++)
		{
			g=g+a[k];
			k++;
		}
	//	cout<<g<<" ";
		if(g==b)
		{
			count++;
			i=i+n-1;
			//cout<<i<<endl;
		}
	}
	cout<<count<<endl;}
	return 0;
}
