#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		string s;
		int n;
		cin>>n;
		cin>>s;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				count=count+1;
			}}
		if(count==0)
		{
			cout<<"DRAW"<<endl;
			}	
		else if(count%2==0)
		{
			cout<<"BOB"<<endl;
		}
		else {
			if(count-1==0)
			{
				cout<<"BOB"<<endl;
			}
			else {
				cout<<"ALICE"<<endl;
			}
		}
		
	}
	return 0;
}
