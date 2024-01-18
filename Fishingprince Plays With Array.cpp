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
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		long long int b[k];
		for(int i=0;i<k;i++)
		{
			cin>>b[i];
		}
		int j=0;
		int h=0;
		for(int i=0;i<k;i++)
		{
			if(j==n)
			{
				h=1;
				break;
			}
			if(a[j]==b[i])
			{
				j++;
				
			}
			else if(a[j]>b[i])
				{
					if(a[j]%m!=0)
					{
						h=1;
						break;
					}
					else{
						long long int p=a[j]/m;
						if(p!=b[i])
						{
							h=1;
							break;
						}
						else{
							int ch=0;
							for(int g=0;g<m;g++)
							{
								if(i==k)
								{
									ch=1;
									break;
								}
								if(b[i]!=p)
								{
									ch=1;
									break;
								}
								i++;
								
							}
							if(ch==1)
							{
								h=1;
								break;
							}
							else{
								j++;
								i--;
							}
						}
					}
				}
			
			else if(a[j]<b[i])
			{
				int ch=0;
				for(int g=j;g<=j+m-1;g++)
				{
					if(g==n)
					{
						ch=1;
						break;
					}
					if(a[g]!=a[j])
					{
						ch=1;
						break;
					}
				}
				if(ch==1)
				{
					h=1;
					
					break;
				}
				else{
					long long int p=m*a[j];
					//cout<<"value of p is "<<p<<endl;
					if(p!=b[i])
					{
						h=1;
						break;
					}
					else{
						j=j+m;
						//cout<<"value of i and are "<<i<<" "<<j<<endl;
					}
				}
				
			}
		}
		if(j!=n)
		{
			h=1;
		}
		if(h==0)
		{
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;
}
