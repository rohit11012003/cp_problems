#include<iostream>
using namespace std;
int main()
{
	string a="hello";
	string s;
	int k=0;
	cin>>s;
	int j=0;
	for(int i=0;i<5;i++)
	{
		while(j<s.size())
		{
			if(s[j]==a[i])
			{
				j++;
				k=k+1;
				break;
			}
			j++;
		}
	}
	if(k==5)
	{
		cout<<"YES"<<endl;
	}
	else if(k<5)
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
