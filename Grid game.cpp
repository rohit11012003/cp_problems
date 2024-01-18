#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=0;
	int b=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0')
		{
			a++;
			cout<<1<<" "<<a<<endl;
		}
		else if(s[i]=='1')
		{
			b++;
			if(b==1)
			{
				cout<<4<<" "<<1<<endl;
			}
			else if(b==2)
			{
				cout<<4<<" "<<3<<endl;
				b=0;
			}
		}
		if(a==4)
		{
			a=0;
		}
	}
	return 0;
}
