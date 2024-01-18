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
		unordered_map<int , int > m;
		vector<int> v;
		int ans[n];
		for(int i=0;i<n;i++)
		{
			ans[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			if(m[a[i]]==0)
			{
				if(i+1!=a[i])
				{
					ans[i]=a[i];
					m[a[i]]=m[a[i]]+1;
				}
				else{
					v.push_back(a[i]);
				}
			}
			else{
				v.push_back(a[i]);
			}
		}
		if(v.size()==0)
		{
			cout<<n<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
		else{
			
		
		sort(v.begin(),v.end());
		cout<<n-v.size()<<endl;
		reverse(v.begin(),v.end());
		int j=0;
		for(int i=0;i<n;i++)
		{
			if(ans[i]==0)
			{
				if(i+1!=v[j])
				{
					ans[i]=v[j];
					j++;
				}
			}
			else{
				ans[i]=v[j+1];
				v.erase(v.begin()+j+1);
				
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}}
}
