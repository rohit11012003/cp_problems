#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		int d=0;
		map<int,int> s1,s2;
		for(int i=0;i<n;i++)
		{
			s1[i]=0;
			s2[i]=0;
		}
		for(int i=1;i<n;i++)
		{
			if(s[i]=='b')
			{
				int j=i-1;
				while(s[j]=='a'&&j>=0)
				{
					s1[j]=1;
					j--;
				}
			}
		}
		for(int i=1;i<n;i++)
		{
			if(s[i]=='c')
			{
				int j=i-1;
				while(s[j]=='b'&&j>=0)
				{
					s2[j]=1;
					j--;
				}
			}
		}
		int k1=0;
			int k2=0;
		for(int i=0;i<n;i++)
		{
			
			if(s[i]!=t[i])
			{
				
				
				
					if(t[i]=='a')
					{
						if(k1>0&&s[i]=='b')
						{
							k1--;
						}
						else{
							
						d=1;
						break;	
						}
						
					}
					else if(t[i]=='b')
					{
						if(s[i]=='a')
						{
							if(s1[i]==1)
							{
								k1++;
							}
							else{
							
								d=1;
								break;
							}
						}
						else if(s[i]=='c')
						{
							if(k2>0)
							{
								k2--;
							}
							else{
								
								d=1;
								break;
							}
						}
					}
					else if(t[i]=='c')
					{
						if(s[i]=='a')
						{
							
						d=1;
						break;
						}
						else if(s[i]=='b')
						{
							if(s2[i]==1)
							{
								k2++;
							//	cout<<"value of k2 is "<<k2<<endl;
							}
							else{
							
								d=1;
								break;
							}
						}
					}
				
			}
		}
		if(d==0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
