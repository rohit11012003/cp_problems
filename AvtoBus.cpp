#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		 long long int n;
		cin>>n;
		
	
	if(n%2!=0)
	{
		cout<<-1<<endl;
	}
	else if(n<4)
	{
		cout<<-1<<endl;
	}
	
	else {
		if(n%6==0)
		{
			cout<<(n/6)<<" ";
		}
		else if(n%6==2)
		{
			cout<<(n/6)+1<<" ";
		}
		else if(n%6==4)
		{
			cout<<(n/6)+1<<" ";
		}
		cout<<(n/4)<<endl;
	}
}
	return 0;
}
