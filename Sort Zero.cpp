#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ind=-1;
		for(int i=n-1;i>0;i--)
		{
			if(a[i-1]>a[i])
			{
				ind=i-1;
				break;
			}
		}
		
		if(ind==-1)
		{
			cout<<0<<endl;
		}
		else{
			unordered_map<int, int> m;
			for(int i=0;i<=ind;i++)
			{
				m[a[i]]=m[a[i]]+1;
			}
			unordered_map<int, int> m1=m;
			int ind1=-1;
			//cout<<m1[6]<<endl;
			
			for(int i=n-1;i>ind;i--)
			{
				//cout<<m1[a[i]]<<" "<<a[i]<<endl;
				if(m1[a[i]]!=0)
				{
					ind1=i;
					break;
				}
			}
			if(ind1==-1)
			{
				//cout<<"hello";
				cout<<m.size()<<endl;
			}
			else{
				for(int i=ind1;i>=ind;i--)
				{
					m[a[i]]=m[a[i]]+1;
				}
				cout<<m.size()<<endl;
			}
		}
		
		
	}
}
