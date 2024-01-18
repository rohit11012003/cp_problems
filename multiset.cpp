#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset <string> s;
	s.insert("abc");
	s.insert("sdf");
	s.insert("abc");
	s.insert("dfg");
	for(auto val: s){
		cout<<val<<endl;
	}
//	auto it=s.find("abc");
//	s.erase(it);
s.erase("abc");
	for(auto val: s){
		cout<<val<<endl;
	}
}
