#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	string p=s;
	int a=0;
	int b=0;
	for(int i=0;i<s.size()-1;i++)
	{
		a=0;
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				a=a+1;
			}
		}
		if(a>b)
		{
			b=a;
		}
	}
	if(b+1>k)
	{
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
	}
	return 0;
	
}
