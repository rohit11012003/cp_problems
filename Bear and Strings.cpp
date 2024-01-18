#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string g="bear";
	long long int count=0;
	if(s.size()<=3)
	{
		cout<<0<<endl;}
		else{
			for(int i=0;i<=s.size()-4;i++)
			{
				string h;
				for(int j=i;j<i+4;j++)
				{
					h=h+s[j];
				}
				if(h==g)
				{
				
					int t=i;
					int u=s.size()-4-i;
					cout<<t<<" "<<u<<endl;
					if(t!=0&&u!=0)
					{
						count=count+(t+1)*(u+1);
					}
					else if(t==0&&u==0)
					{
						count++;
					}
					else if(t==0&&u!=0)
					{
						count=count+u+1;
					}
					else if(u==0&&t!=0)
					{
						count=count+t+1;
					}
					
				}
			}
		}
	
	cout<<count<<endl;
	return 0;
}
