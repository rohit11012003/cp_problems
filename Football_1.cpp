#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	if(n<(2*k+1))
	{
		cout<<-1<<endl;
	}
	else{
		cout<<n*k<<endl;
		for(int i=1;i<=k+1;i++)
		{
			for(int j=i+1;j<=i+k;j++)
			{
				//cout<<"hello1"<<endl;
				printf("%d %d\n",i,j);
			}
		}
		for(int j=k+2;j<=n;j++)
		{
			
			
			for(int i=j+1;i<=j+k;i++)
			{
				if(i>n)
				{
					printf("%d %d\n",j,i-n);
				}
				else{
					printf("%d %d\n",j,i);
				}
			}
		}
		
	}
	
}
