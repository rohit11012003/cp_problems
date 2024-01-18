#include<bits/stdc++.h>
using namespace std;
int main()
{
long long 	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		long long int n;
		cin>>n;
	    vector <int> a;
		for(int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			a.push_back(t);
		}
		vector<int> b=a;
		sort(b.begin(),b.end());
		int t=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					if((a[j]&a[i])==0)
					{
						t=1;
					}
				}
				if(t==1)
				{
					break;
				}
			}
			if(t==1)
			{
				break;
			}
		}
		if(t==0)
		{
			cout<<"YES"<<endl;
		}
		else if(t==1)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
	
}
