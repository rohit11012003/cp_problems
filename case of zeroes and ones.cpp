#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0'&&s[i+1]=='1')
		{
			s.erase(s.begin()+i);
			s.erase(s.begin()+i);
			if(i>=1)
			{
				i=i-2;
			}
			else{
				i=i-1;
			}
			
		}
		else if(s[i]=='1'&&s[i+1]=='0')
		{
			s.erase(s.begin()+i);
			s.erase(s.begin()+i);
			if(i>=1)
			{
				i=i-2;
			}
			else{
				i=i-1;
			}
		}
	}
	cout<<s.size()<<endl;
	return 0;
}
