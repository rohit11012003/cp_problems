#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	for(int u=0;u<q;u++)
	{
		string s;
		cin>>s;
		int a1=0;
		int a2=0;
		int a3=0;
		int a4=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='L')
			{
			a1++;
			}
			else if(s[i]=='R')
			{
				a2++;
			}
			else if(s[i]=='U')
			{
				a3++;
			}
			else if(s[i]=='D')
			{
				a4++;
			}}
			int a,b;
			a=min(a1,a2);
			b=min(a3,a4);
			if(a>=2&&b>=2)
			{
				cout<<(2*a)+(2*b)<<endl;
				cout<<"UL";
				for(int i=1;i<=b-1;i++)
				{
					cout<<"U";
				}
				for(int i=1;i<=a;i++){
					cout<<"R";
				}
				for(int i=1;i<=b;i++){
					cout<<"D";
				}
				for(int i=1;i<=a-1;i++)
				{
					cout<<"L";
				}
				cout<<endl;
			}
			else if(a==0&&b==0)
			{
				cout<<0<<endl;
			}
			else if(a==0)
			{
				cout<<2<<endl;
				cout<<"UD"<<endl;
			}
			else if(b==0)
			{
			     cout<<2<<endl;
			     cout<<"LR"<<endl;
			}
			else if(a==1)
			{
				cout<<2+(2*b)<<endl;
				cout<<"L";
				for(int i=1;i<=b;i++)
				{
					cout<<"U";
				}
				cout<<"R";	
				for(int i=1;i<=b;i++)
				{
					cout<<"D";
				}
				cout<<endl;		
			}
			else if(b==1)
			{
				cout<<2+(2*a)<<endl;
				cout<<"U";
				for(int i=1;i<=a;i++)
				{
					cout<<"L";
				}
				cout<<"D";
				for(int i=1;i<=a;i++)
				{
					cout<<"R";
				}
				cout<<endl;
			}
		
	}
	return 0;
}
