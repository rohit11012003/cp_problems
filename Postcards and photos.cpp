#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=0;
	int count=0;
	for(int i=0;i<s.size();i++)
	{
	
		
		if(s[i]==s[i+1])
		{
			a++;
		}
		if(a>=5)
		{
			a=0;
			count++;
		}
		if(s[i]!=s[i+1])
		{
			a=0;
			count++;
		}
	
	}
	cout<<count<<endl;
	return 0;
}
