#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		int a[m];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		map<int,long long int> m1;
//		for(int i=0;i<m;i++)
//		{
//			for(int j=0;j<a[i];j++)
//			{
//				int k=s[j];
//				m1[k]=m1[k]+1;
//			}
//		}
sort(a,a+m);
int k=m;
for(int i=0;i<m;i++)
{
	if(i==0)
	{
		for(int j=0;j<a[i];j++)
		{
				int p=s[j];
				m1[p]=m1[p]+k;
		}
		k--;
	}
	else{
		for(int j=a[i-1];j<a[i];j++)
		{
			int p=s[j];
				m1[p]=m1[p]+k;
			
		}
		k--;
	}
}

		for(int i=0;i<n;i++)
		{
			int k=s[i];
				m1[k]=m1[k]+1;
		}
		string h="az";
		int st=h[0];
		int en=h[1];
		for(int i=st;i<=en;i++)
		{
			cout<<m1[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
