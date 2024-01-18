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
		long long int l[n];
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
		}
		long long int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		 vector<long long int> v;
		 long long int count=l[n-1]-1;
		 cout<<"count is "<<count<<endl;
		for(int i=n-1;i>0;i--)
		{
			if(i==1)
			{
				if(a[i]==b[i])
				{
					v.push_back(count+2);
					v.push_back(l[0]);
				}
				else{
					
				
				if(count+2+l[i-1]-1-(b[i]-a[i])<l[i-1]-1)
			{
				cout<<"hello"<<endl;
				v.push_back(count+2+l[i-1]-1+(b[i]-a[i]));
				count=l[i-1];
				v.push_back(count);
			}
			else{
				count+=2+l[i-1]-1-(b[i]-a[i]);
				v.push_back(count);
			}
		}
			}
			else{
				cout<<"llop 2"<<endl;
			if(b[i]==a[i])
			{
				v.push_back(count+2);
				count=l[i-1];
				}	
			else{
				
			
			if(count+2+l[i-1]-1-(b[i]-a[i])<l[i-1]-1)
			{
				cout<<"condition 1 "<<endl;
				v.push_back(count+2+(b[i]-a[i]));
				count=l[i-1];
			}
			else{
				cout<<"condition 2"<<endl;
				count+=2+l[i-1]-1-(b[i]-a[i]);
			}
		}
		}}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]<<endl;
	}
}
