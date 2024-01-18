#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int k=0;k<n;k++)
	{
		string s1,s2;
		cin>>s1>>s2;
		int t=0;
		int g=0;
		for(int i=0;i<s1.size();i++)
		{
			char d=s1[i];
			int h=1;
			for(int j=i;j<s1.size();j++)
			{
				if(s1[j+1]==s1[j])
				{
					h++;
					i++;
				}
				else {
					break;
				}
			}
			int p=0;
			while(s2[g]==d)
			{
				p++;
				g++;
				if(g==(s2.size()))
				{
					break;
				}
			}
		
			if(p<h)
		{
			t=1;
			break;
		}
		}
		if(s2.size()>g)
		{
			t=1;
		}
		if(t==1)
		{
			cout<<"NO"<<endl;
		}
		else if(t==0)
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
