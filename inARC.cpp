#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			count=count+1;
		}
		else if(s[i]=='0')
		{
			count=count+1;;
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}
