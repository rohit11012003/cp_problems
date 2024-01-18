#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,string> m;
	m[1]="abc";
	m[4]="fdg";
	m[5]="fds";
	m.insert({3,"dfg"});
	for(auto value:m)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}
	auto it=m.find(3);
	m.erase(it);
	m.erase(4);
		for(auto value:m)
	{
		cout<<value.first<<" "<<value.second<<endl;
	}
}
