#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int dp[N][N];
int fun(const vector<int> &b, const vector<int> &c, int ind, int val, int val1, int amount)
{
    if(val1==val)
    {
        return amount;
    }
    if(ind==-1)
    {
        return 1000;
    }
    if(dp[ind][val1]!=-1)
    {
    	return dp[ind][val1];
	}
    if(val1+b[ind]>val)
    {
       return dp[ind][val1]= fun(b,c,ind-1,val,val1,amount);
    }
    else{
        return dp[ind][val1]= min(fun(b,c,ind-1,val,val1,amount),fun(b,c,ind,val,val1+b[ind],amount+c[ind]));
    }
    
}

int main()
{
	int a;
	cin>>a;
	vector<int> A,B,C;
	for(int i=0;i<a;i++)
	{
		int d;
		cin>>d;
		A.push_back(d);
	}
	int e;
	cin>>e;
	for(int i=0;i<e;i++)
	{
		int f;
		cin>>f;
		B.push_back(f);
	}
	for(int i=0;i<e;i++)
	{
		int f;
		cin>>f;
		C.push_back(f);
	}
	vector<int> ans;
	int n=B.size();
    for(int i=0;i<A.size();i++)
    {
    	memset(dp,-1,sizeof(dp));
        int z=fun(B,C,n-1,A[i],0,0);
        cout<<z<<endl;
        ans.push_back(z);
    }
    int ans1=0;
    for(int i=0;i<ans.size();i++)
    {
        ans1=ans1+ans[i];
    }
    cout<< ans1;
}

