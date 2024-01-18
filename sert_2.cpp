#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    unordered_set<string> s;
    for(int i=0;i<n;i++)
    {
    	string s1;
    	cin>>s1;
    	s.insert(s1);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		string s1;
		cin>>s1;
		auto it=s.find(s1);
		if(it!=s.end())
		{
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}
