#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t=0;
	char s[n][n];
	int e=n-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>s[i][j];
		}
	}
	if(s[0][0]==s[0][1])
	{
		cout<<"NO"<<endl;
	}
else{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
			    if(s[i][j]!=s[0][0])
			    {
			    	t=1;
			    	break;
				}
			}
		else 	if(j==(e-i))
			{
			if(s[i][j]!=s[0][0])
			    {
			    	t=1;
			    	break;
				}	
			}
			else {
				if(s[i][j]!=s[0][1])
				{
					t=1;
					break;
				}
				
				
			}
		}
		if(t==1)
		{
			break;
		}
	}
	if(t==0)
	{
		cout<<"YES"<<endl;
	}
	else if(t==1)
	{
		cout<<"NO"<<endl;
	}
	}
	return 0;
}
