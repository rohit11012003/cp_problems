#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long int n1;
		cin>>n1;
		string s;
		cin>>s;
		vector<long long int > v;
		for(long long int i=0;i<n1;i++)
		{
			if(s[i]=='*')
			{
				v.push_back(i+1);
			}
		}
	
		long long int n=v.size();
		long long int count=0;
		if(n<=1)
		{
			cout<<0<<endl;
		}
//		else if(n==2)
//		{
//			cout<<v[1]-v[0]-1<<endl;
//		}
		else {
			
		
		if(v.size()%2!=0)
		{
		
			long long int k=v[n/2];
			long long int j=1;
		
			for(int i=n/2-1;i>=0;i--)
			{
				count=count+k-v[i]-j;
				
				j++;
			}
			long long int j1=1;
			for(int i=n/2+1;i<v.size();i++)
			{
				count=count+v[i]-k-j1;
				j1++;
				
			}
		}
		else {
			long long int count1=0;
			long long int count2=0;
			long long int k=v[n/2];
			long long int j=1;
			long long int j1=1;
			for(int i=(n/2)-1;i>=0;i--)
			{
				count1=count1+k-v[i]-j;
				j++;
			}
			for(int i=(n/2)+1;i<v.size();i++)
			{
				count1=count1+v[i]-k-j1;
				j1++;
			}
			long long int j2=1;
			long long int j3=1;
			long long int k1=v[(n/2)-1];
			
			for(int i=(n/2)-2;i>=0;i--)
			{
				count2=count2+k1-v[i]-j2;
				j2++;
			}
			for(int i=n/2;i<v.size();i++)
			{
				count2=count2+v[i]-k1-j2;
				j3++;
			}
			count=min(count1,count2);
		}
		cout<<count<<endl;
	}}
	return 0;
}
