#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if (s.size()<=10)
		{
			cout<<s<<endl;
		}
		else if (s.size()>10){
		
		int z;
		z=s.size();
		cout<<s[0]<<z-2<<s[z-1]<<endl;
		}
	
	}
	return 0;
}
