#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,k;
		cin>>n>>m>>k;
		long long int a[k];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+k,greater<int>());
		
		//while coloring along the row
	    vector<long long int > row;
	    vector<long long int > col;
	    for(int i=0;i<k;i++)
	    {
	    	long long int p=a[i]/m;
	    //	cout<<a[i]<<" "<<m<<" "<<p<<endl;
	    	if(p>1)
	    	{
	    		row.push_back(p);
			}
		}
		for(int i=0;i<k;i++)
		{
			long long int p=a[i]/n;
			if(p>1)
			{
				col.push_back(p);
			}
		}
	
		int z=0;
		long long int sum1=0;
		for(int i=0;i<row.size();i++)
		{
			sum1=sum1+row[i];
			if(sum1==n)
			{
				z=1;
				break;
			}
			else if(sum1>n)
			{
				if(i==0)
				{
					z=1;
					break;
				}
				else{
					long long int p=sum1-row[i];
					if(n-p==1&&row[0]==2)
					{
						break;
					}
					else{
						z=1;
						break;
					}
					
				}
			}
		}
		int z2=0;
		long long int sum2=0;
		for(int i=0;i<col.size();i++)
		{
			sum2=sum2+col[i];
			if(sum2==m)
			{
				z2=1;
				break;
			}
		else 	if(sum2>m)
			{
				if(i==0)
				{
					z2=1;
					break;
				}
				else{
					long long int p=sum2-col[i];
					if(m-p==1&&col[0]==2)
					{
						break;
					}
					else{
						z=1;
						break;
					}
					
				}
			}
		}
		if(z==1||z2==1)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"N0"<<endl;
		}
	}
}
