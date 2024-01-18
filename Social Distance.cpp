#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				v1.push_back(i+1);
			}
			else{
				v2.push_back(i+1);
			}
		}
		if(v1.size()==n)
		{
			cout<<n<<endl;
		}
		else{
			
		
		long long int count=0;
		for(int i=0;i<v2.size();i++)
		{
			if(i==0)
			{
				if((v2[i]-k-1)>0)
				{
					count=count+v2[i]-k-1;
				}
			}
			else {
				if((v2[i]-v2[i-1]-1-(2*k))>0)
				{
					count=count+v2[i]-v2[i-1]-1-(2*k);
				}
			}
		}
		if(v2[v2.size()-1]!=n)
		{
			if((n-v2[v2.size()-1]-1-k)>0)
			{
				count=count+n-v2[v2.size()-1]-1-k;
			}
		}
		cout<<count<<endl;
		}
	}
	return  0;
}
