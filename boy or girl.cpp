#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=s.size();
	int count=0;
	for(int i=0;i<s.size()-1;i++)
	{
		int z=0;
		for(int j=i+1;j<=s.size()-1;j++)
		{
			if(s[i]==s[j]&&z==0)
			{
				
				count=count+1;
				s.erase(s.begin()+j);
				z=z+1;
			}
	    	else if(s[i]==s[j])
			{
				s.erase(s.begin()+j);
			}
		}
	}
	int w=a-count;
	if(w%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else{
		cout<<"IGNORE HIM!"<<endl;
	}
	return 0;
}
