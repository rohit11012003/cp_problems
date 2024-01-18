#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		string s;
		cin>>s;
		int count=0;
		int i=0;
		if(s.size()==1)
		{
			count=0;
		}
		else{
		
		while(s.size()>0)
		{
			if(s[i]!=s[i+1])
			{
				s.erase(s.begin()+i);
				s.erase(s.begin()+i);
				count=count+1;
				if(i==0)
			{
				i=0;
			}
			else{
				i=i-1;
			}
			}
			else{
				i++;
			}
			if(i>=s.size()-1)
			{
				break;
			}
		}}
		if(count%2==0)
		{
			cout<<"NET"<<endl;
		}
		else {
			cout<<"DA"<<endl;
		}
	}
	return 0;
}

