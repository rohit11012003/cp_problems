#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h1,a1,c1;
	cin>>h1>>a1>>c1;
	int h2,a2;
	cin>>h2>>a2;
	long long int count=0;
	vector<string> v;
	while(h2>0)
	{count++;
		if(h2<=a1)
		{
			string s="STRIKE";
			v.push_back(s);
			h2=h2-a1;
			break;
		}
		else if(h1>a2)
		{
			string s="STRIKE";
			v.push_back(s);
			h2=h2-a1;
		}
		else if(h1<=a2)
		{
		string s="HEAL";
			v.push_back(s);
			h1=h1+c1;
		}
		h1=h1-a2;
	}
	cout<<count<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
