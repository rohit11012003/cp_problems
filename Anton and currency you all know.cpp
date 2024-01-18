#include<bits/stdC++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int t=0;
	int n=s.size();
	for(long long int i=0;i<s.size()-1;i++)
	{
		stringstream st;
		st<<s[i];
		int h;
		st>>h;
		if(h%2==0)
		{
			t=1;
			break;
		}
	}
	if(t==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	else{
		int u;
		for(long long int i=n-2;i>=0;i--)
	{
		stringstream st;
		st<<s[i];
		int h;
		st>>h;
		if(h%2==0)
		{
			u=i;
			break;
		}
	}
		stringstream st;
		st<<s[n-1];
		int g;
		st>>g;
		for(long long int i=0;i<n-1;i++)
		{
			stringstream stf;
			stf<<s[i];
			int y;
			stf>>y;
			if(y%2==0&&y<g)
			{
				string h;
				h=h+s[i];
				h=h+s[n-1];
				s[i]=h[1];
				s[n-1]=h[0];
				cout<<s<<endl;
				return 0;
			}
		}
//		cout<<"hello";
		string h;
		h=h+s[u];
		h=h+s[n-1];
		s[n-1]=h[0];
		s[u]=h[1];
		cout<<s<<endl;
		return 0;
	}
}
