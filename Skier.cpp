#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	
unordered_map<pair<int,int> , int > m1;
	vector<string> v2;
	long long int a=0;
	long long int b=0;
	string s1;
	cin>>s1;
	long long int count=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='N')
		{
			b++;
		}
		if(s1[i]=='S')
		{
			b--;
		}
		if(s1[i]=='E')
		{
			a--;
		}
		if(s1[i]=='W')
		{
			a++;
		}
		pair<int ,int > ser;
		ser={a,b};
		auto it = find (v1.begin(), v1.end(), ser);
		if(it==v1.end())
		{
			count+=5;
			v1.push_back({a,b});
			string f;
			f=f+s1[i];
			v2.push_back(f);
		}
		else {
			
		}
	}
}
	
	
}
