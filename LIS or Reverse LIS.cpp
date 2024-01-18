#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p;
	cin>>p;
	while(p--)
	{
		long long int n;
		cin>>n;
		vector<long long int> v;
		for(long long int i=0;i<n;i++)
		{
		long long int a;
		cin>>a;
		v.push_back(a);
		}
		sort(v.begin(),v.end());
		vector<long long int> v1;
		vector<long long int> v2;
		int f=0;
		for(int i=0;i<v.size()-1;i++)
		{
			if(v[i]==v[i+1])
			{
				long long int u=v[i];
				long long vh;
				int t=1;
				for(int j=i+1;i<v.size();j++)
				{
					if(v[j]!=v[i])
					{
						vh=j-1;
						break;
					}
					t++;
				}
				if(t>=3)
				{
					v.erase(v.begin()+i,v.begin()+vh);
					i--;
					if(f==0)
					{f=1;
						while(t--)
						{
							if(t%2!=0)
							{
								v1.push_back(u);
								
							}
							else{
								v2.push_back(u);
							}
						}
					}
					else{
						
						f=0;
						while(t--)
						{
							if(t%2!=0)
							{
								v2.push_back(u);
								
							}
							else{
								v1.push_back(u);
							}
						}
					}
					}
				}
			}
			for(int i=0;i<v.size();i++)
			{
				if(f==0)
				{
					if(i%2!=0)
					{
						v1.push_back(v[i]);
					}
					else{
						v2.push_back(v[i]);
					}
				}
				else{
						if(i%2!=0)
					{
						v2.push_back(v[i]);
					}
					else{
						v1.push_back(v[i]);
					}
				}
			}
//			for(int i=0;i<v1.size();i++)
//			{
//				cout<<v1[i]<<" ";
//			}
//			cout<<endl;
//			for(int i=0;i<v2.size();i++)
//			{
//				cout<<v2[i]<<" ";
//			}
//			cout<<endl;
			long long int u=0;
			int p1=0;
			int p2=0;
			long long int u1=0;
			int j=1;
			
			for(int i=0;i<v1.size()-1;i++)
			{
				if(v1[i+1]<=v1[i])
				{
					if(j>u)
					{
						u=j;
						p1=1;
					}
					j=1;
				}
				else{
					j++;
					if(i==v1.size()-2)
				{
					if(j>u)
					{
						u=j;
					}
				}
				}
				
			}
			
			j=1;
			for(int i=0;i<v2.size()-1;i++)
			{
		//		cout<<v2[i+1]<<" "<<v2[i]<<endl;
				if(v2[i+1]<=v2[i])
				{
					if(j>u1)
					{
						u1=j;
						p2=1;
					}
					j=1;
				}
				else{
					j++;
					if(i==v2.size()-2)
					{
						if(j>u1)
						{
							u1=j;
						}
					}
				}
			}
			if(p2==0)
			{
				u1=v2.size();
			}
			//cout<<u<<" "<<u1<<endl;
			cout<<min(u,u1)<<endl;
		}
	return 0;	
	}
	
