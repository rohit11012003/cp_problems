#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	int d=0;
		int s;
		cin>>s;
		int a;
		int b;
		if(s<10)
		{
			cout<<"zero"<<endl;
			cout<<s<<endl;
		}
		else if(s>=10){
		
	for(int i=1;i>0;i++)
	{
		if(s/10>1)
		{
			cout<<"one"<<endl;
			a=s/10;
			b=s%10;
			s=a+b;
			d=d+a;
		}
		else {
			if(s==10)
			{
				cout<<"two"<<endl;
				cout<<(d*10)+11<<endl;
				break;
			}
			else{
				cout<<s+(d*10)<<endl;
				break;
			}
		}
	}}
	return 0;
}}
