#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	cin>>s;
	string j;
	for(int i=2;i<=t;i++)
	{
		if(t%i==0){
			for(int k=0;k<i/2;k++)
			{
				swap(s[k],s[i-k-1]);
			}
		}
	}
	cout<<s<<endl;
	return 0;
}
