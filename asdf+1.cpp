#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		//cout<<n<<" "<<m<<endl;
		long long int a[m];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		sort(a,a+m);
		vector<long long int> v;
		//cout<<"sek";
	//	cout<<m<<endl;
		//return 0;
		for(int i=1;i<m;i++)
		{
			//cout<<"hd"<<endl;
			v.push_back(a[i]-a[i-1]-1);
		}
		v.push_back(n-a[m-1]+a[0]-1);
		//cout<<"hello1";
		sort(v.begin(),v.end(),greater<int>());
	
		long long int z=0;
		long long int ans=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i]-z>2)
			{
				ans=ans+v[i]-z-1;
				z=z+4;
			}
			else{
				if(v[i]-z<=0)
				{
					break;
				}
				else{
					if(v[i]-z==1||v[i]-z==2)
					{
						ans=ans+1;
						z=z+2;
						break;
					}
					
				}
			}
		}
		cout<<n-ans<<endl;
	}
}
