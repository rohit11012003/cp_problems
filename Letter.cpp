#include<bits/stdc++.h>
using namespace std;
int main()

{
	string s;
	cin>>s;
	int n=s.size();
	int a[n];
	int b[n];
	int count1=0;
	int count2=0;
	for(int i=0;i<n;i++)
	{
		int j=s[i];
		if(j>='a'&&j<='z')
		{
			count1++;
		}
		a[i]=count1;
	}
	for(int i=n-1;i>=0;i--)
	{
		int j=s[i];
		if(j>='A'&&j<='Z')
		{
			count2++;
		}
		b[i]=count2;
	}
	 vector<int> v;
	for(int i=0;i<n-1;i++)
	{
		v.push_back(a[i]+b[i+1]);
	}
	v.push_back(b[0]);
	v.push_back(a[n-1]);
	sort(v.begin(),v.end());
	cout<<v[0]<<endl;
	
}
