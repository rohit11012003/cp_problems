#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			s.erase(s.begin()+i);
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<s<<endl;
	}
	else {
		s.erase(s.begin()+0);
		cout<<s<<endl;
	}
	return 0;
}
