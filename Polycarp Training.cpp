#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end(),greater<int>());
long long 	int t=0;
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			t++;
		}
	}
	cout<<n-t<<endl;
	return 0;
}
