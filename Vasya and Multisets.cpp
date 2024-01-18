#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	unordered_map<int, int> m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]=m[a[i]]+1;
	}
	int count=0;
	for(auto it : m)
	{
		if(it.second==1||it.second>2)
		{
			count++;
		}
	}
	int val[105];
	for(int i=0;i<105;i++)
	{
	val[i]=-1;
	}
	char ans[n];
	if(count%2!=0)
	{
		cout<<"NO"<<endl;
	}
		
	else{
		cout<<"YES"<<endl;
		char ans[n];
		int z=0;
		for(auto it : m)
		{
			int p=it.first;
			int b=it.second;
			//cout<<p<<" "<<b<<endl;
			if(b==1)
			{
				for(int i=0;i<n;i++)
				{
					if(a[i]==p)
					{
						if(z==0)
						{
							ans[i]='A';
							z=1;
						}
						else{
							ans[i]='B';
							z=0;
						}
						//cout<<i<<" "<<ans[i]<<endl;
					}
				}
			}
			else if(b==2)
			{
				int z1=0;
				for(int i=0;i<n;i++)
				{
					if(a[i]==p)
					{
						if(z1==0)
						{
							ans[i]='A';
							z1=1;
						}
						else{
							ans[i]='B';
						}
						//cout<<i<<" "<<ans[i]<<" "<<p<<endl;
					}
				}
			}
			else if(b>2)
			{
				int h=z;
				int z1=0;
				for(int i=0;i<n;i++)
				{
					if(h==0)
					{
					if(a[i]==p)
					{
						if(z1==0&&z==0)
						{
							ans[i]='A';
							z1=1;
							z=1;
						}
						else{
							ans[i]='B';
						}
					}
					//cout<<i<<" "<<ans[i]<<" "<<p<<endl;
				}
				else if(h==1)
				{
					if(a[i]==p)
					{
						if(z1==0&&z==1)
						{
							ans[i]='B';
							z1=1;
							z=0;
						}
						else{
							ans[i]='A';
						}
						//cout<<i<<" "<<ans[i]<<" "<<p<<endl;
					}
				}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<ans[i];
		}
		cout<<endl;
	}
}
