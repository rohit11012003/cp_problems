#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[30];
		for(int i=0;i<30;i++)
		{
			a[i]=0;
		}
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
		//	cout<<s[i]<<endl;
			int f=s[i];
		//	cout<<f<<endl;
			f=f-97;
		//	cout<<"value of f is "<<f<<endl;
			a[f]++;
		}
		sort(a,a+30,greater<int>());
		int count=0;
		int z=0;
//		for(int i=0;i<30;i++)
//		{
//			cout<<a[i]<<" ";
//		}
		for(int i=0;i<30;i++)
		{
			if(a[i]==0)
			{
				break;
			}
			else if(a[i]%2==0)
			{
				count=count+a[i];
			}
			else{
				if(a[i]==1)
				{
					z++;
				}
				else{
					count=count+a[i]-1;
					z++;
				}
			}
				
			
		}
		int ans;
		count=count/2;
		int g=count/k;
		int p=count%k;
		if(g==0)
		{
			if(z<k-p)
			{
				ans=0;
			}
			else{
				ans=1;
			}
		}
		else if(g>0)
		{
			if(p==0)
			{
				if(z<k)
				{
					ans=2*g;
				}
				else{
					ans=(2*g)+1;
				}
				
			}
			else{
			
					if((2*p)+z>=k)
					{
						ans=2*g+1;
					}
					else{
						ans=2*g;
					}
				}
			
		}
		if(n>=k&&ans==0)
		{
			cout<<1<<endl;
		}
		else{
			cout<<ans<<endl;
		}
		
		
		
	}
	return 0;
}
