#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		int n;
		cin>>n;
		int a1[n];
		int a2[n];
		for(int i=0;i<n;i++)
		{
			cin>>a1[i]>>a2[i];
		}
		int p=0;
		for(int i=0;i<n-1;i++)
		{
			if(a1[i]<0||a2[i]<0)
			{
				p=1;
				break;
			}
			else if(a1[i]>a1[i+1]||a2[i]>a2[i+1])
			{
				p=1;
				break;
			}
			else if(a2[i]>a1[i])
			{
				p=1;
				break;
			}
			else if((a2[i+1]-a2[i])>(a1[i+1]-a1[i]))
			{
				p=1;
				break;
			}
		}
			if(a1[n-1]<0||a2[n-1]<0)
			{
				p=1;
			}
		  else if(a2[n-1]>a1[n-1])
			{
				p=1;
				
			}
			if(p==0)
			{
				cout<<"YES"<<endl;
			}
			else if(p==1)
			{
				cout<<"NO"<<endl;
			}
	}
	return 0;
}
