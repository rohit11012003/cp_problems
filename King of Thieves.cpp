#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t=0;
	for(int i=1;i<34;i++)
	{
		for(int j=0;j+(4*i)<n;j++)
		{
		   if(s[j]=='*'&&s[j+i]=='*'&&s[j+(2*i)]=='*'&&s[j+(3*i)]=='*'&&s[j+(4*i)]=='*')	  
		   {
		   	t=1;
		   	break;
		   }
		}
		if(t==1)
		{
			break;
		}
	}
	if(t==0)
	{
		cout<<"no"<<endl;
	}
	else if(t==1)
	{
		cout<<"yes"<<endl;
	}
	return 0;
}
