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
		long long int a_1[n];
		long long sum=0;
		vector<vector<int> > v;
		for(int i=0;i<n;i++)
		{
			cin>>a_1[i];
			sum=sum+a_1[i];
			long long int b=a_1[i];
			vector<int> v1;
			for(int j=50;j>=0;j--)
			{
				v1.push_back((b>>j)&1);
			}
			v.push_back(v1);
		}

		int a[51];
		for(int i=0;i<=50;i++)
		{
			//cout<<v[0][i];
			a[i]=v[0][i];
		}
	//	cout<<endl;
		if(n>=2)
		{
			
		
		for(int i=0;i<=50;i++)
		{
			int z=1;
			for(int j=1;j<n;j++)
			{
				
				if(j==1)
				{
					if(v[j][i]==v[j-1][i])
					{
						z=0;
					}
					else{
						z=1;
					}
				}
				else{
					if(v[j][i]==z)
					{
						z=0;
					}
					else{
						z=1;
					}
				}
			}
			a[i]=z;
		}}
//		for(int i=0;i<=50;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
		//return 0;
	
		sum=sum/2;
		long long int count=0;
		for(int i=50;i>=0;i--)
		{
			if(a[i]==1)
			{
				count=count+pow(2,50-i);
			}
		}
//		cout<<count<<endl;
//		return 0;
//cout<<"value of sum is "<<sum<<" value of count is "<<count<<endl; 
		if(sum==count)
		{
			cout<<0<<endl;
			cout<<endl;
		}
		else if(sum<count)
		{
			cout<<2<<endl;
			long long int diff=count-sum;
			cout<<diff<<" "<<diff<<endl;
		}
		else if(sum>count)
		{
			long long int u;
			for(int i=2;i<=50;i++)
			{
				if(sum+(pow(2,i)/2)<count+pow(2,i)&&pow(2,i)>(2*sum))
				{
					u=pow(2,i);
					break;
				}}
				sum=sum+u/2;
				count=count+u;
				if(sum==count)
				{
					cout<<1<<endl;
					cout<<u<<endl;
				}
				else{
					cout<<3<<endl;
					long long int diff=count-sum;
					cout<<u<<" "<<diff<<" "<<diff<<endl;
				}
			
			
		}
	}
}
