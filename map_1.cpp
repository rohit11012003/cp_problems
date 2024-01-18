#include<bits/stdc++.h>;
using namespace std;
int main()
{
	map<string,int> m;
	long long int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]=m[s]+1;
	}

	for(auto ma:m)
	{
		cout<<ma.first<<" "<<ma.second<<endl;
		ma--;
	}
	return 0;
}
