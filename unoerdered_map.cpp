#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_map<string,int> m;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]=m[s]+1;
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
	return 0;
}
