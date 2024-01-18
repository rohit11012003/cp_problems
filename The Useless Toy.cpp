#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,g;
	cin>>s;
	cin>>g;
	int n;
	cin>>n;
	int a=s[0];
	int b=g[0];
	int d=abs(a-b);
	if(d==24||d==2||d==0)
	{
		cout<<"undefined"<<endl;
	}
	else {
		if(a==94)
		{
			if(b==62&&((n-1)%4)==0||b==60&&(n+1)%4==0)
			{
				cout<<"cw"<<endl;
			}
			else {
				cout<<"ccw"<<endl;
			}
		}
		else if(a==62)
		{
			if(b==118&&(n-1)%4==0||b==94&&(n+1)%4==0)
			{
				cout<<"cw"<<endl;
			}
			else {
				cout<<"ccw"<<endl;
			}
		}
		else if(a==118)
		{
		   	if(b==60&&(n-1)%4==0||b==62&&(n+1)%4==0)
		   	{
		   		cout<<"cw"<<endl;
			   }
			   else {
			   	cout<<"ccw"<<endl;
			   }
		}
		else if(a==60)
		{
			if(b==94&&(n-1)%4==0||b==118&&(n+1)%4==0)
			{
				cout<<"cw"<<endl;
			}
			else {
				cout<<"ccw"<<endl;
			}
		}
		
		
	
	}
	return 0;
	
}
