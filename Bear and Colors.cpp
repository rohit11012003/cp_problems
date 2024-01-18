#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		int b[n+1];
		for(int i=0;i<=n;i++)
		{
			b[i]=0;
		}
	for(int i=0;i<n;i++)
	{
	
		int max;
		int ind;
		unordered_map<int,int> m;
		for(int j=i;j<n;j++)
		{
			if(i==j){
				max=1;
				m[a[j]]=m[a[j]]+1;
				ind=a[j];
				b[ind]=b[ind]+1;
			}
			else{
				m[a[j]]=m[a[j]]+1;
				if(m[a[j]]>max)
				{
					max=m[a[j]];
					ind=a[j];
				}
				else if (max==m[a[j]])
				{
					ind=min(ind,a[j]);
				}
				b[ind]=b[ind]+1;
			}
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
