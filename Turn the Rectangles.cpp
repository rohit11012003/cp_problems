#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t=0;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	int g=max(a[0],b[0]);
	int h[n];
	h[0]=g;
	for(int i=1;i<n;i++)
	{
		if((a[i]>h[i-1])&&(b[i]>h[i-1]))
		{
			t=1;
			break;
		}
		else {
			int ma=max(a[i],b[i]);
			int mi=min(a[i],b[i]);
			if(ma<=h[i-1])
			{
			h[i]=ma;	
			}
			else {
				h[i]=mi;
			}
		}
	}

	 if(t==0)
	{
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
