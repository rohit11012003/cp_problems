#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int g=0;g<T;g++)
	{
		string t;
		cin>>t;
		int n=t.size();
		int f=0;
		for(int i=1;i<n;i++)
		{
			if(t[i]!=t[0])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout<<t<<endl;
		}
		else {
			string s;
			s=s+t[0];
			for(int i=1;i<n;i++)
			{
				if(t[i]!=t[i-1])
				{
					s=s+t[i];
				}
				else{
					if(t[i-1]=='1')
					{
						s=s+'0';
					}
					else {
						s=s+'1';
					}
					s=s+t[i];
				}
			}
			cout<<s<<endl;
		}
	}
}
