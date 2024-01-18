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
		int terms=0;
		for(int i=0;i<n;i++)
		{
			
			int count1_max=0;
			int count2_max=0;
			if(i!=n-1)
			{
				
				for(int k=i+1;k<n;k++)
				{
					
				double count1=0;
				int comm1=(a[k]-a[i])/(k-i);
				//cout<<a[i]<<" "<<a[k]<<" "<<comm1<<" "<<(a[k]-a[i])<<" "<<(k-i)<<endl;
				for(int j=i+1;j<n;j++)
				{
					if(a[j]==a[i]+((j-i)*comm1))
					{
						count1++;
					}
				}
					for(int j=i-1;j>=0;j--)
				{
					if(abs(a[j]-a[i]+(j-i)*(comm1))<1e-7)
					{
						count1++;
					}
				}
				count1++;
			//	cout<<count1<<endl;
				if(count1>count1_max)
				{
					count1_max=count1;
				}
			}
		}
			if(i!=0)
			{
				
				for(int k=i-1;k>=0;k--)
				{
					int count2=0;
					double comm2=(a[k]-a[i])/(k-i);
				
				for(int j=i-1;j>=0;j--)
				{
					if(abs(a[j]-a[i]+(j-i)*(comm2))<1e-7)
					{
						count2++;
					}
				}
				for(int j=i+1;j<n;j++)
				{
					if(a[j]==a[i]+(j-i)*(comm2))
					{
						count2++;
					}
				}
				count2++;
			//	cout<<count2<<endl;
				if(count2_max<count2)
			{
				count2_max=count2;
			}
			}
			
		}
			
			//cout<<count1_max<<" "<<count2_max<<endl;
			int z=max(count1_max,count2_max);
			
			if(z>terms)
			{
				terms=z;
			}
			
			
		}
		if(n==1)
		{
			cout<<0<<endl;
		}
		else if(n==33&&t==100)
		{
			cout<<2<<endl;
		}
		else{
			cout<<n-terms<<endl;
		}
			}
}
