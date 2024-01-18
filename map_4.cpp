#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	m[1]=4;
	m[4]=3;
	m[2]=9;
	for(auto it : m)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
}
