#include<bits/stdc++.h>
using namespace std;
const int N=3e3+5;
const int N1=5;
long long int dp1[N][N1];
long long int dp2[N][N1];
long long int knapsack(long long int f[], long long int c[], int ind, long long int font, long long int amount, int n)
{
	if(amount==3)
	{
		return dp1[ind][amount]=0;
	}
	if(ind==-1)
	{
		return pow(10,9);
	}
	if(dp1[ind][amount]!=-1)
	{
		return dp1[ind][amount];
	}
	else{
		if(ind==n-1)
		{
			long long int ans=knapsack(f,c,ind-1, f[n-1],amount+1,n)+c[n-1];
			return dp1[ind][amount]= min(ans, knapsack(f,c,ind-1,font,amount,n));
		}
		else{
			if(f[ind]<font)
			{
				long long int ans=knapsack(f,c,ind-1,f[ind],amount+1,n)+c[ind];
				return dp1[ind][amount]= min(ans,knapsack(f,c,ind-1,font,amount,n ));
			}
			else{
				return dp1[ind][amount]= knapsack(f,c,ind-1,font, amount,n);
			}
		}
	}
}

long long int knapsack1(long long int f[],long long  int c[], int ind, long long int font, long long int amount, int n)
{
	if(amount==3)
	{
		return dp2[ind][amount]= 0;
	}
	if(ind==-1)
	{
		return  dp2[ind][amount] = pow(10,9);
	}
	if(dp2[ind][amount]!=-1)
	{
		return dp2[ind][amount];
	}
	else{
		if(ind==n-1)
		{
			long long int ans=knapsack1(f,c,ind-1, f[n-1],amount+1,n)+c[n-1];
			return dp2[ind][amount]= min(ans, knapsack1(f,c,ind-1,font,amount,n));
		}
		else{
			if(f[ind]>font)
			{
				long long int ans=knapsack1(f,c,ind-1,f[ind],amount+1,n)+c[ind];
				return  min(ans,knapsack1(f,c,ind-1,font,amount,n ));
			}
			else{
				return dp2[ind][amount]= knapsack1(f,c,ind-1,font,amount,n);
			}
		}
	}
}
int main()
{
	memset(dp1, -1,sizeof(dp1));
	memset(dp2,-1,sizeof(dp2));
long long 	int n;
	cin>>n;
	long long int f[n];
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
	}
	long long int sum1=0;
	long long int c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		sum1=sum1+c[i];
	}
	int amount=0;
	//cout<<LLONG_MAX<<endl;
	long long int ans1=	knapsack(f,c,n-1, pow(10,10), 0,n);

	long long int ans=knapsack1(f,c,n-1,0,0,n);
	//cout<<ans<<endl;
	long long int ans2=min(ans1,ans);
	if(ans2>sum1)
	{
		cout<<-1<<endl;
	}
	else{
		cout<<ans2<<endl;
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=4;j++)
		{
			cout<<dp1[i][j]<<" ";
		}
		cout<<endl;
	}
}
