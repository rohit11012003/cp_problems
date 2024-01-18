#include<bits/stdc++.h>
using namespace std;
int main()
{

	string s;
	cin>>s;
	int count=0;
	int n=s.size();
	vector <string> a;
	string f=s;
	a.push_back(f);
	for(int i=1;i<=s.size();i++)
	{
		char g=s[n-1];
		s.erase(s.begin()+(n-1));
		stringstream str;
		str<<g;
		string e;
		str>>e;
		int u=0;
		s=e+s;
		a.push_back(s);
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				u=1;
				break;
			}
		}
		if(u==0)
		{
			count++;
		}
		
		
	}
	cout<<count+1;
	return 0;
}
