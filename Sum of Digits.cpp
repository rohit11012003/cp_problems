#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	int z=0;
	long long int t;
	while(1>0)
	{
	for(int i=0;i<s.size();i++)
	{
		int p=s[i];
		cout<<p<<endl;
		t=t+p;
	}
		if(t/10==0)
		{
			cout<<count+1<<endl;
			z=1;
		}
		else{
			stringstream str;
			str<<t;
			t=0;
			count++;
			s.empty();
			str>>s;
		}
	if(z==1)
	{
		break;return 0;
	}
	}
}
