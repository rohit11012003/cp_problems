#include<bits/stdc++.h>
using namespace std;
int main()
{
	const int N=1e5;
	long long int sq[N];
	for(int i=0;i<N;i++)
	{
		sq[i]=i*i;
	}
	long long int n;
	cin>>n;
	if(n%2==0)
	{
		long long int z=n/2;
		long long int p=pow(z,2)+1;
		long long int p1=pow(z,2)-1;
		if(p1!=0)
		{
			cout<<p<<" "<<p1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else{
		long long int p=n+1;
		long long int p1=n-1;
		long long int ans=-1;
		for(int i=0;i<N;i++)
		{
			if(sq[i]==p)
			{
				ans=i;
				break;
			}
			if(sq[i]>p)
			{
				break;
			}
		}
		if(ans!=-1)
		{
			cout<<(2*ans)<<" "<<pow(ans,2)+1<<endl;
		}
		else{
			if(p1==0)
			{
				cout<<-1<<endl;
			}
			else{
				for(int i=0;i<N;i++)
				{
					if(sq[i]==p1)
					{
						ans=i;
						break;
					}
					if(sq[i]>p1)
					{
						break;
					}
				}
				if(ans==-1)
				{
					cout<<-1<<endl;
				}
				else{
					if(ans*ans==1)
					{
						cout<<-1<<endl;
					}
					else{
						cout<<2*ans<<" "<<(ans*ans)-1<<endl;
					}
				}
			}
		}
		
	}
}
